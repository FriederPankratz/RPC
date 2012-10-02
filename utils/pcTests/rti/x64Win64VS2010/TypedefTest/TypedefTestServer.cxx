/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "TypedefTestServer.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "TypedefTestRequestReplyPlugin.h"

#include "TypedefTestServerRPCSupport.h"

TypedefTestServerH::TypedefTestServerH(eProsima::DDSRPC::ServerStrategy *strategy,
    eProsima::DDSRPC::Transport *transport, int domainId) :
    Server(strategy, transport, domainId)
{
    _impl = new TypedefTestServerImpl();
    
    this->setRPC(new getLargoServerRPC("getLargo", this,
                getLargoRequestUtils::registerType(getParticipant()),
                getLargoReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getLargo, getParticipant()));
    this->setRPC(new getLarguisimoServerRPC("getLarguisimo", this,
                getLarguisimoRequestUtils::registerType(getParticipant()),
                getLarguisimoReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getLarguisimo, getParticipant()));
    this->setRPC(new getDatosDefServerRPC("getDatosDef", this,
                getDatosDefRequestUtils::registerType(getParticipant()),
                getDatosDefReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getDatosDef, getParticipant()));
    this->setRPC(new getDatosDefondoServerRPC("getDatosDefondo", this,
                getDatosDefondoRequestUtils::registerType(getParticipant()),
                getDatosDefondoReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getDatosDefondo, getParticipant()));
    this->setRPC(new getCadenaServerRPC("getCadena", this,
                getCadenaRequestUtils::registerType(getParticipant()),
                getCadenaReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getCadena, getParticipant()));
    this->setRPC(new getCorreaServerRPC("getCorrea", this,
                getCorreaRequestUtils::registerType(getParticipant()),
                getCorreaReplyUtils::registerType(getParticipant()),
                &TypedefTestServerH::getCorrea, getParticipant()));

}
TypedefTestServerH::~TypedefTestServerH()
{
    delete _impl;    
}

void TypedefTestServerH::getLargo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    largo  l1 = 0;    
    largo  l2 = 0;    
    largo  getLargo_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getLargoReply *replyData = NULL;

    getLargoRequestUtils::extractTypeData((getLargoRequest*)requestData, l1  );

returnedValue = srv->_impl->getLargo(l1  , l2  , getLargo_ret  );

    replyData = getLargoReplyUtils::createTypeData(l2  , getLargo_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getLargoReplyTypeSupport::delete_data(replyData);
    
    getLargoRequestTypeSupport::delete_data((getLargoRequest*)requestData);
    
        
        
}
void TypedefTestServerH::getLarguisimo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    larguisimo  ll1 = 0;    
    larguisimo  ll2 = 0;    
    larguisimo  getLarguisimo_ret = 0;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getLarguisimoReply *replyData = NULL;

    getLarguisimoRequestUtils::extractTypeData((getLarguisimoRequest*)requestData, ll1  );

returnedValue = srv->_impl->getLarguisimo(ll1  , ll2  , getLarguisimo_ret  );

    replyData = getLarguisimoReplyUtils::createTypeData(ll2  , getLarguisimo_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getLarguisimoReplyTypeSupport::delete_data(replyData);
    
    getLarguisimoRequestTypeSupport::delete_data((getLarguisimoRequest*)requestData);
    
        
        
}
void TypedefTestServerH::getDatosDef(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    DatosDef *d1 = NULL;    
    DatosDef *d2 = DatosDefPluginSupport_create_data();    
    DatosDef *getDatosDef_ret = DatosDefPluginSupport_create_data();      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getDatosDefReply *replyData = NULL;

    getDatosDefRequestUtils::extractTypeData((getDatosDefRequest*)requestData, d1  );

returnedValue = srv->_impl->getDatosDef(d1  , d2  , getDatosDef_ret  );

    replyData = getDatosDefReplyUtils::createTypeData(d2  , getDatosDef_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getDatosDefReplyTypeSupport::delete_data(replyData);
    
    getDatosDefRequestTypeSupport::delete_data((getDatosDefRequest*)requestData);
    
    DatosDefPluginSupport_destroy_data(d2);    
    DatosDefPluginSupport_destroy_data(getDatosDef_ret);    
}
void TypedefTestServerH::getDatosDefondo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    DatosDefondo *dd1 = NULL;    
    DatosDefondo *dd2 = DatosDefondoPluginSupport_create_data();    
    DatosDefondo *getDatosDefondo_ret = DatosDefondoPluginSupport_create_data();      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getDatosDefondoReply *replyData = NULL;

    getDatosDefondoRequestUtils::extractTypeData((getDatosDefondoRequest*)requestData, dd1  );

returnedValue = srv->_impl->getDatosDefondo(dd1  , dd2  , getDatosDefondo_ret  );

    replyData = getDatosDefondoReplyUtils::createTypeData(dd2  , getDatosDefondo_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getDatosDefondoReplyTypeSupport::delete_data(replyData);
    
    getDatosDefondoRequestTypeSupport::delete_data((getDatosDefondoRequest*)requestData);
    
    DatosDefondoPluginSupport_destroy_data(dd2);    
    DatosDefondoPluginSupport_destroy_data(getDatosDefondo_ret);    
}
void TypedefTestServerH::getCadena(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    cadena  c1 = NULL;    
    cadena  c2 = NULL;    
    cadena  getCadena_ret = NULL;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getCadenaReply *replyData = NULL;

    getCadenaRequestUtils::extractTypeData((getCadenaRequest*)requestData, c1  );

returnedValue = srv->_impl->getCadena(c1  , c2  , getCadena_ret  );

    replyData = getCadenaReplyUtils::createTypeData(c2  , getCadena_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getCadenaReplyTypeSupport::delete_data(replyData);
    
    getCadenaRequestTypeSupport::delete_data((getCadenaRequest*)requestData);
    
    if(c2 != NULL) free(c2);    
    if(getCadena_ret != NULL) free(getCadena_ret);    
}
void TypedefTestServerH::getCorrea(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServerH *srv = dynamic_cast<TypedefTestServerH*>(server);
    correa  cc1 = NULL;    
    correa  cc2 = NULL;    
    correa  getCorrea_ret = NULL;      
    eProsima::DDSRPC::ReturnMessage  returnedValue = eProsima::DDSRPC::OPERATION_SUCCESSFUL;        
    getCorreaReply *replyData = NULL;

    getCorreaRequestUtils::extractTypeData((getCorreaRequest*)requestData, cc1  );

returnedValue = srv->_impl->getCorrea(cc1  , cc2  , getCorrea_ret  );

    replyData = getCorreaReplyUtils::createTypeData(cc2  , getCorrea_ret  );

    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);

    getCorreaReplyTypeSupport::delete_data(replyData);
    
    getCorreaRequestTypeSupport::delete_data((getCorreaRequest*)requestData);
    
    if(cc2 != NULL) free(cc2);    
    if(getCorrea_ret != NULL) free(getCorrea_ret);    
}

TypedefTestServer::TypedefTestServer(eProsima::DDSRPC::ServerStrategy *strategy,
    int domainId) :
    TypedefTestServerH(strategy, new eProsima::DDSRPC::UDPTransport(), domainId)
{
}
TypedefTestServer::~TypedefTestServer()
{   
}

TypedefTestWANServer::TypedefTestWANServer(eProsima::DDSRPC::ServerStrategy *strategy,
    const char *public_address, const char *server_bind_port,
    int domainId) :
    TypedefTestServerH(strategy, new eProsima::DDSRPC::TCPTransport(public_address, server_bind_port), domainId)
{
}
TypedefTestWANServer::~TypedefTestWANServer()
{   
}