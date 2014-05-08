/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServer.h
 * This header file contains the declaration of the server for all interfaces.
 *
 * This file was generated by the tool rpcrestgen.
 */

#ifndef _CalculatorSERVER_H_
#define _CalculatorSERVER_H_

#include "rpcrest/server/Server.h"
#include "CalculatorServerImpl.h"

namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            class CalculatorProtocol;
        }
    }
}

namespace Calculator
{
    /*!
     * @brief This class implements a specific server for the defined interface addResource by user.
     * @ingroup CALCULATOR
     */
    class FASTRPCUSERDllExport addResourceServer : public eprosima::rpc::server::Server
    {
        public:

            /*!
             * @brief This constructor sets the transport that will be used by the server.
             *
             * @param strategy Strategy used by server to work with new requests.
             *        This class doesn't delete this object in its destructor. Cannot be NULL.
             * @param transport The network transport that the server has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol Generated protocol that the server has to use.
             *        This class has the information to process requests and build responses for this application environment. 
             * @param servant Servant that the server will use to invoke user's functions.
             * @exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
             */
            addResourceServer(eprosima::rpc::strategy::ServerStrategy &strategy, eprosima::rpc::transport::ServerTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol, addResourceServerImpl &servant);

            //! @brief Destructor.
            virtual ~addResourceServer();





            
         private:
            
            //! \brief Pointer to the server's servant implemented by the user.
            addResourceServerImpl &_impl;
    };

    /*!
     * @brief This class implements a specific server for the defined interface substractResource by user.
     * @ingroup CALCULATOR
     */
    class FASTRPCUSERDllExport substractResourceServer : public eprosima::rpc::server::Server
    {
        public:

            /*!
             * @brief This constructor sets the transport that will be used by the server.
             *
             * @param strategy Strategy used by server to work with new requests.
             *        This class doesn't delete this object in its destructor. Cannot be NULL.
             * @param transport The network transport that the server has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol Generated protocol that the server has to use.
             *        This class has the information to process requests and build responses for this application environment. 
             * @param servant Servant that the server will use to invoke user's functions.
             * @exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
             */
            substractResourceServer(eprosima::rpc::strategy::ServerStrategy &strategy, eprosima::rpc::transport::ServerTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol, substractResourceServerImpl &servant);

            //! @brief Destructor.
            virtual ~substractResourceServer();





            
         private:
            
            //! \brief Pointer to the server's servant implemented by the user.
            substractResourceServerImpl &_impl;
    };

    /*!
     * @brief This class implements a specific server for the defined interface multiplyResource by user.
     * @ingroup CALCULATOR
     */
    class FASTRPCUSERDllExport multiplyResourceServer : public eprosima::rpc::server::Server
    {
        public:

            /*!
             * @brief This constructor sets the transport that will be used by the server.
             *
             * @param strategy Strategy used by server to work with new requests.
             *        This class doesn't delete this object in its destructor. Cannot be NULL.
             * @param transport The network transport that the server has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol Generated protocol that the server has to use.
             *        This class has the information to process requests and build responses for this application environment. 
             * @param servant Servant that the server will use to invoke user's functions.
             * @exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
             */
            multiplyResourceServer(eprosima::rpc::strategy::ServerStrategy &strategy, eprosima::rpc::transport::ServerTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol, multiplyResourceServerImpl &servant);

            //! @brief Destructor.
            virtual ~multiplyResourceServer();





            
         private:
            
            //! \brief Pointer to the server's servant implemented by the user.
            multiplyResourceServerImpl &_impl;
    };

    /*!
     * @brief This class implements a specific server for the defined interface divideResource by user.
     * @ingroup CALCULATOR
     */
    class FASTRPCUSERDllExport divideResourceServer : public eprosima::rpc::server::Server
    {
        public:

            /*!
             * @brief This constructor sets the transport that will be used by the server.
             *
             * @param strategy Strategy used by server to work with new requests.
             *        This class doesn't delete this object in its destructor. Cannot be NULL.
             * @param transport The network transport that the server has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol Generated protocol that the server has to use.
             *        This class has the information to process requests and build responses for this application environment. 
             * @param servant Servant that the server will use to invoke user's functions.
             * @exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
             */
            divideResourceServer(eprosima::rpc::strategy::ServerStrategy &strategy, eprosima::rpc::transport::ServerTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol, divideResourceServerImpl &servant);

            //! @brief Destructor.
            virtual ~divideResourceServer();





            
         private:
            
            //! \brief Pointer to the server's servant implemented by the user.
            divideResourceServerImpl &_impl;
    };

};


#endif // _CalculatorSERVER_H_