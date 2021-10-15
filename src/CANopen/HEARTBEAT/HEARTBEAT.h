/*
 * HEARTBEAT.h
 *
 *  Created on: 14 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_HEARTBEAT_HEARTBEAT_H_
#define CANOPEN_HEARTBEAT_HEARTBEAT_H_

#include "../CANopen.h"

enum{
	TOGGLE_HEARTBEAT_0 = 0x0,
	TOGGLE_HEARTBEAT_1 = 0x1,
	STATUS_HEARTBEAT_ENTER_PRE_OPERATIONAL = 0x7F,
	STATUS_HEARTBEAT_NORMAL_OPERATIONAL = 0x5,
	STATUS_HEARTBEAT_IS_STOPPED = 0x4,
	STATUS_HEARTBEAT_HAS_BOOT_UP = 0x0
};

STATUS_CODE CANopen_Producer_HEARTBEAT_Transmit_Status_Operation(CANopen *canopen);
void CANopen_Consumer_HEARTBEAT_Receive_Status_Operation(CANopen *canopen, uint8_t node_ID, uint8_t data[]);

#endif /* CANOPEN_HEARTBEAT_HEARTBEAT_H_ */
