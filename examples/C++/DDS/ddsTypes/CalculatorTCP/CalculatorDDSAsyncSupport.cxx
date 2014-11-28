/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcdds_LICENSE file included in this rpcdds distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorAsyncSupport.cxx
 * This source file contains functionality to use asynchronous calls for all interfaces.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorDDSAsyncSupport.h"
#include "rpcdds/exceptions/ServerInternalException.h"
#include "rpcdds/exceptions/ClientInternalException.h"
#include "rpcdds/utils/Messages.h"
#include "CalculatorRequestReplyPlugin.h"

#include "CalculatorExtension.h"

using namespace eprosima::rpc;
using namespace ::exception;

Calculator_additionTask::Calculator_additionTask(Calculator_additionCallbackHandler &obj) :
    DDSAsyncTask(), m_obj(obj)
{
    Calculator_Reply_initialize(&m_reply);
}

Calculator_additionTask::~Calculator_additionTask()
{
    Calculator_Reply_finalize(&m_reply);
}

Calculator_additionCallbackHandler& Calculator_additionTask::getObject()
{
    return m_obj;
}

void* Calculator_additionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_additionTask::execute()
{  
    DDS_Long  return_ = 0;
    ReturnMessage retcode = eprosima::rpc::OK;
    
    switch (m_reply.reply._u.addition._d)
    {
        case 0:
            return_ = m_reply.reply._u.addition._u.out_.return_;
		    getObject().addition(return_);
            break;
        case 1:
            retcode = (eprosima::rpc::ReturnMessage)m_reply.reply._u.addition._u.sysx_;
            if(retcode == eprosima::rpc::SERVER_INTERNAL_ERROR)
                getObject().on_exception(ServerInternalException(""));
            break;
        default:
            getObject().on_exception(ClientInternalException("Error extracting information from server"));
    }
}

void Calculator_additionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_subtractionTask::Calculator_subtractionTask(Calculator_subtractionCallbackHandler &obj) :
    DDSAsyncTask(), m_obj(obj)
{
    Calculator_Reply_initialize(&m_reply);
}

Calculator_subtractionTask::~Calculator_subtractionTask()
{
    Calculator_Reply_finalize(&m_reply);
}

Calculator_subtractionCallbackHandler& Calculator_subtractionTask::getObject()
{
    return m_obj;
}

void* Calculator_subtractionTask::getReplyInstance()
{
    return &m_reply;
}

void Calculator_subtractionTask::execute()
{  
    DDS_Long  return_ = 0;
    ReturnMessage retcode = eprosima::rpc::OK;
    
    switch (m_reply.reply._u.subtraction._d)
    {
        case 0:
            return_ = m_reply.reply._u.subtraction._u.out_.return_;
		    getObject().subtraction(return_);
            break;
        case 1:
            retcode = (eprosima::rpc::ReturnMessage)m_reply.reply._u.subtraction._u.sysx_;
            if(retcode == eprosima::rpc::SERVER_INTERNAL_ERROR)
                getObject().on_exception(ServerInternalException(""));
            break;
        default:
            getObject().on_exception(ClientInternalException("Error extracting information from server"));
    }
}

void Calculator_subtractionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}




