#ifndef _EnumYStringTest_CLIENT_RPC_SUPPORT_H_
#define _EnumYStringTest_CLIENT_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericClientRPC.h"
#include "EnumYStringTestRequestReplySupport.h"


GENERIC_CLIENT_RPC(getEnumClientRPC, getEnumRequestDataWriter, getEnumReplyDataReader);


GENERIC_CLIENT_RPC(getStringClientRPC, getStringRequestDataWriter, getStringReplyDataReader);


GENERIC_CLIENT_RPC(getStringBoundedClientRPC, getStringBoundedRequestDataWriter, getStringBoundedReplyDataReader);


#endif  // _EnumYStringTest_CLIENT_RPC_SUPPORT_H_