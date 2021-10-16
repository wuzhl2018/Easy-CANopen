/*
 * Enum_Command_Specifier_Codes.h
 *
 *  Created on: 9 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_ENUMS_ENUM_CS_CODES_H_
#define CANOPEN_ENUMS_ENUM_CS_CODES_H_

enum {
	/* Network Management Services */
	CS_NETWORK_MANAGMENT_SERVICE_START_REMOTE_NODE = 0x1,
	CS_NETWORK_MANAGMENT_SERVICE_STOP_REMOTE_NODE = 0x2,
	CS_NETWORK_MANAGMENT_SERVICE_ENTER_PRE_OPERATIONAL = 0x80,
	CS_NETWORK_MANAGMENT_SERVICE_RESET_NODE = 0x81,
	CS_NETWORK_MANAGMENT_SERVICE_RESET_COMMUNICATION = 0x82,

	/* LSS */
	CS_SWITCH_MODE_GLOBAL_PROTOCOL = 0x4,
	CS_SWITCH_MODE_SELECTIVE_PROTOCOL_VENDOR_ID = 0x40,
	CS_SWITCH_MODE_SELECTIVE_PROTOCOL_PRODUCT_CODE = 0x41,
	CS_SWITCH_MODE_SELECTIVE_PROTOCOL_REVISION_NUMBER = 0x42,
	CS_SWITCH_MODE_SELECTIVE_PROTOCOL_SERIAL_NUMBER = 0x43,
	CS_SWITCH_MODE_SELECTIVE_PROTOCOL_RESPONSE = 0x44,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_VENDOR_ID = 0x46,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_PRODUCT_CODE = 0x47,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_REVISION_NUMBER_LOW = 0x48,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_REVISION_NUMBER_HIGH = 0x49,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_SERIAL_NUMBER_LOW = 0x4A,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_SERIAL_NUMBER_HIGH = 0x4B,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_NON_CONFIGURED = 0x4C,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_CONFIGURED_RESPONSE = 0x4F,
	CS_IDENTIFY_REMOTE_SLAVE_PROTOCOL_NON_CONFIGURED_RESPONSE = 0x50,
	CS_CONFIGURE_NODE_ID = 0x11,
	CS_CONFIGURE_BAUDRATE = 0x13,
	CS_ACTIVATE_BAUDRATE = 0x15,
	CS_STORE_CONFIGURATION = 0x17,
	CS_INQUIRE_VENDOR_ID = 0x5A,
	CS_INQUIRE_PRODUCT_CODE = 0x5B,
	CS_INQUIRE_REVISION_NUMBER = 0x5C,
	CS_INQUIRE_SERIAL_NUMBER = 0x5D,
	CS_INQUIRE_NODE_ID = 0x5F,
};

#endif /* CANOPEN_ENUMS_ENUM_CS_CODES_H_ */
