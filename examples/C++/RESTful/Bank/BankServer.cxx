/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file BankServer.cxx
 * This source file contains the definition of the server for all interfaces.
 *
 * This file was generated by the tool rpcrestgen.
 */

#include "BankServer.h"
#include "rpcrest/strategies/ServerStrategy.h"
#include "rpcrest/transports/ServerTransport.h"
#include "BankProtocol.h"
#include "rpcrest/exceptions/ServerInternalException.h"

namespace Bank
{
    account_accountNumberResourceServer::account_accountNumberResourceServer(eprosima::rpc::strategy::ServerStrategy &strategy, eprosima::rpc::transport::ServerTransport &transport,
                eprosima::rpc::protocol::BankProtocol &protocol, account_accountNumberResourceServerImpl &servant) :
        Server(strategy, transport, protocol), _impl(servant)
    {
       protocol.activateInterface("Bank::account_accountNumberResource");
       protocol.linkBank_account_accountNumberResourceImpl(servant);
    }

    account_accountNumberResourceServer::~account_accountNumberResourceServer()
    {
        //TODO Unlink an deactivate.
    }








};
