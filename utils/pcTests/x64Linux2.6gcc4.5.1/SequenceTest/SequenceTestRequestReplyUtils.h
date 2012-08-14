
#ifndef _SequenceTest_REQUEST_REPLY_UTILS_H_
#define _SequenceTest_REQUEST_REPLY_UTILS_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "SequenceTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class getSLongRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getSLongRequest* createTypeData(largo* l1, largo* l2);
        
        static void extractTypeData(getSLongRequest* data, largo* &l1, largo* &l2);
};


class getSLongReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getSLongReply* createTypeData(largo* l2, largo* l3, largo*& returnedValue);
        
        static void extractTypeData(getSLongReply* data, largo* &l2, largo* &l3, largo*& returnedValue);
};


class getStringRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getStringRequest* createTypeData(cadena* s1, cadena* s2);
        
        static void extractTypeData(getStringRequest* data, cadena* &s1, cadena* &s2);
};


class getStringReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getStringReply* createTypeData(cadena* s2, cadena* s3, cadena*& returnedValue);
        
        static void extractTypeData(getStringReply* data, cadena* &s2, cadena* &s3, cadena*& returnedValue);
};


class getStringBoundedRequestUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getStringBoundedRequest* createTypeData(dattos* sb1, dattos* sb2);
        
        static void extractTypeData(getStringBoundedRequest* data, dattos* &sb1, dattos* &sb2);
};


class getStringBoundedReplyUtils
{
    public:

        static const char* registerType(DDS::DomainParticipant *clientParticipant);
         
        static getStringBoundedReply* createTypeData(dattos* sb2, dattos* sb3, dattos*& returnedValue);
        
        static void extractTypeData(getStringBoundedReply* data, dattos* &sb2, dattos* &sb3, dattos*& returnedValue);
};

 
#endif // _SequenceTest_REQUEST_REPLY_UTILS_H_
