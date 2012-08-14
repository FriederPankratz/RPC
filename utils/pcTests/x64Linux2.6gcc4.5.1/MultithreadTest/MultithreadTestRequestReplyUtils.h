
#ifndef _MultithreadTest_REQUEST_REPLY_UTILS_H_
#define _MultithreadTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "MultithreadTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class testRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static testRequest* createTypeData(Dato* dato1);
        
        static void extractTypeData(testRequest* data, Dato* &dato1);
};


class testReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static testReply* createTypeData(Dato* dato2, DDS_Long& returnedValue);
        
        static void extractTypeData(testReply* data, Dato* &dato2, DDS_Long& returnedValue);
};

 
#endif // _MultithreadTest_REQUEST_REPLY_UTILS_H_
