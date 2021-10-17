/*
 * CANopen_Server_GUARD_Receive.c
 *
 *  Created on: 14 okt. 2021
 *      Author: Daniel Mårtensson
 */

#include "GUARD.h"

STATUS_CODE CANopen_Server_GUARD_Receive_Response_Guard(CANopen *canopen, uint8_t node_ID, uint8_t data[]){
	/* Check if guard is enabled */
	if(!canopen->server.guard.is_enabled)
		return STATUS_CODE_SERVICE_NOT_ENABLED;

	/* Get guard time in milliseconds and life factor */
	uint32_t guard_time_ms = 0;
	uint32_t life_factor = 0;
	CANopen_OD_get_dictionary_object_value(canopen, OD_INDEX_GUARD_TIME_MS, OD_SUB_INDEX_0, &guard_time_ms);
	CANopen_OD_get_dictionary_object_value(canopen, OD_INDEX_LIFE_FACTOR, OD_SUB_INDEX_0, &life_factor);

	/* Save the response */
	canopen->server.guard.from_node_ID = node_ID;
	canopen->server.guard.status_operational = data[0] & 0x7F;
	canopen->server.guard.toggle = data[0] >> 7;
	canopen->server.guard.count_tick = Hardware_Get_Time_Tick() - canopen->server.guard.count_tick;	/* Time difference from request to response */

	/* If the time difference is too large, send out an EMCY */
	if(life_factor * guard_time_ms < canopen->server.guard.count_tick)
		return CANopen_Producer_EMCY_Transmit_Error_Message(canopen, ERROR_CODE_GUARD_HARTBEAT, ERROR_REGISTER_COMMUNICATION_ERROR, (uint8_t*){0,0,0,0,0});
	else
		return STATUS_CODE_SUCCESSFUL;
}

