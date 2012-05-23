#ifndef _BasicTypeTest_SERVER_REMOTE_SERVICE_SUPPORT_H_
#define _BasicTypeTest_SERVER_REMOTE_SERVICE_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericServerRemoteService.h"
#include "BasicTypeTestRequestReplySupport.h"


GENERIC_SERVER_REMOTE_SERVICE(getOctetServerRemoteService, getOctetReplyDataWriter, getOctetRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getCharServerRemoteService, getCharReplyDataWriter, getCharRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getWCharServerRemoteService, getWCharReplyDataWriter, getWCharRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getShortServerRemoteService, getShortReplyDataWriter, getShortRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getUShortServerRemoteService, getUShortReplyDataWriter, getUShortRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getLongServerRemoteService, getLongReplyDataWriter, getLongRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getULongServerRemoteService, getULongReplyDataWriter, getULongRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getLLongServerRemoteService, getLLongReplyDataWriter, getLLongRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getULLongServerRemoteService, getULLongReplyDataWriter, getULLongRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getFloatServerRemoteService, getFloatReplyDataWriter, getFloatRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getDoubleServerRemoteService, getDoubleReplyDataWriter, getDoubleRequestDataReader);


GENERIC_SERVER_REMOTE_SERVICE(getBooleanServerRemoteService, getBooleanReplyDataWriter, getBooleanRequestDataReader);


#endif  // _BasicTypeTest_SERVER_REMOTE_SERVICE_SUPPORT_H_