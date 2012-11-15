/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "AsyncCallTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "AsyncCallTestRequestReplyPlugin.h"
#include "AsyncCallTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

AsyncCallTestProxy::AsyncCallTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

AsyncCallTestProxy::AsyncCallTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

AsyncCallTestProxy::~AsyncCallTestProxy()
{
    delete getLong_Service;
    delete getBoolean_Service;
    delete getString_Service;
    delete duplicate_Service;
}

void AsyncCallTestProxy::createRPCs()
{
    this->getLong_Service = new AsyncCallTest_getLongClientRPC("getLong",
                                  AsyncCallTest_getLongRequestUtils::registerType(getParticipant()),
                                  AsyncCallTest_getLongReplyUtils::registerType(getParticipant()),
                                  this);
    this->getBoolean_Service = new AsyncCallTest_getBooleanClientRPC("getBoolean",
                                  AsyncCallTest_getBooleanRequestUtils::registerType(getParticipant()),
                                  AsyncCallTest_getBooleanReplyUtils::registerType(getParticipant()),
                                  this);
    this->getString_Service = new AsyncCallTest_getStringClientRPC("getString",
                                  AsyncCallTest_getStringRequestUtils::registerType(getParticipant()),
                                  AsyncCallTest_getStringReplyUtils::registerType(getParticipant()),
                                  this);
    this->duplicate_Service = new AsyncCallTest_duplicateClientRPC("duplicate",
                                  AsyncCallTest_duplicateRequestUtils::registerType(getParticipant()),
                                  AsyncCallTest_duplicateReplyUtils::registerType(getParticipant()),
                                  this);

}

 
DDS_Long AsyncCallTestProxy::getLong(/*in*/ DDS_Long lo1, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DDS_Long  getLong_ret = 0;    
    AsyncCallTest_getLongRequest instance;
    AsyncCallTest_getLongReply retInstance;

    AsyncCallTest_getLongReply_initialize(&retInstance);    
    AsyncCallTest_getLongRequestUtils::setTypeData(instance, lo1, lo2);
    retcode = getLong_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        AsyncCallTest_getLongReplyUtils::extractTypeData(retInstance, retcode, lo2, lo3, getLong_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getLong_ret;
}
 
DDS_Boolean AsyncCallTestProxy::getBoolean(/*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DDS_Boolean  getBoolean_ret = RTI_FALSE;    
    AsyncCallTest_getBooleanRequest instance;
    AsyncCallTest_getBooleanReply retInstance;

    AsyncCallTest_getBooleanReply_initialize(&retInstance);    
    AsyncCallTest_getBooleanRequestUtils::setTypeData(instance, bo1, bo2);
    retcode = getBoolean_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        AsyncCallTest_getBooleanReplyUtils::extractTypeData(retInstance, retcode, bo2, bo3, getBoolean_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getBoolean_ret;
}
 
char* AsyncCallTestProxy::getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    char*  getString_ret = NULL;    
    AsyncCallTest_getStringRequest instance;
    AsyncCallTest_getStringReply retInstance;

    AsyncCallTest_getStringReply_initialize(&retInstance);    
    AsyncCallTest_getStringRequestUtils::setTypeData(instance, s1, s2);
    retcode = getString_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        AsyncCallTest_getStringReplyUtils::extractTypeData(retInstance, retcode, s2, s3, getString_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return getString_ret;
}
 
Structure AsyncCallTestProxy::duplicate(/*in*/ const Structure& ev) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    Structure duplicate_ret;
        
    AsyncCallTest_duplicateRequest instance;
    AsyncCallTest_duplicateReply retInstance;

    AsyncCallTest_duplicateReply_initialize(&retInstance);    
    AsyncCallTest_duplicateRequestUtils::setTypeData(instance, ev);
    retcode = duplicate_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        AsyncCallTest_duplicateReplyUtils::extractTypeData(retInstance, retcode, duplicate_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return duplicate_ret;
}

 
void AsyncCallTestProxy::getLong_async(AsyncCallTest_getLongCallbackHandler &obj, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    AsyncCallTest_getLongRequest instance;
    AsyncCallTest_getLongTask *task = NULL;
    AsyncCallTest_getLongRequestUtils::setTypeData(instance, lo1, lo2);
    task = new AsyncCallTest_getLongTask(obj, this);
    retcode = getLong_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void AsyncCallTestProxy::getBoolean_async(AsyncCallTest_getBooleanCallbackHandler &obj, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    AsyncCallTest_getBooleanRequest instance;
    AsyncCallTest_getBooleanTask *task = NULL;
    AsyncCallTest_getBooleanRequestUtils::setTypeData(instance, bo1, bo2);
    task = new AsyncCallTest_getBooleanTask(obj, this);
    retcode = getBoolean_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void AsyncCallTestProxy::getString_async(AsyncCallTest_getStringCallbackHandler &obj, /*in*/ char* s1, /*inout*/ char* s2) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    AsyncCallTest_getStringRequest instance;
    AsyncCallTest_getStringTask *task = NULL;
    AsyncCallTest_getStringRequestUtils::setTypeData(instance, s1, s2);
    task = new AsyncCallTest_getStringTask(obj, this);
    retcode = getString_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
 
void AsyncCallTestProxy::duplicate_async(AsyncCallTest_duplicateCallbackHandler &obj, /*in*/ const Structure& ev) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    AsyncCallTest_duplicateRequest instance;
    AsyncCallTest_duplicateTask *task = NULL;
    AsyncCallTest_duplicateRequestUtils::setTypeData(instance, ev);
    task = new AsyncCallTest_duplicateTask(obj, this);
    retcode = duplicate_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}