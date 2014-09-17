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
#include "rpcdds/utils/Messages.h"

using namespace eprosima::rpc;
using namespace ::exception;

Calculator_additionTask::Calculator_additionTask(Calculator_additionCallbackHandler &obj) :
    DDSAsyncTask(), m_obj(obj)
{
}

Calculator_additionTask::~Calculator_additionTask()
{
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
    int32_t  addition_ret = 0;
    ReturnMessage retcode = OPERATION_SUCCESSFUL;
    
    retcode = (ReturnMessage)m_reply._header().retCode();
    addition_ret = m_reply.unio().addition().addition_ret(); 
        
    if(retcode == OPERATION_SUCCESSFUL)
    {
        getObject().addition(addition_ret);
    }
    else
    {
        if(retcode == SERVER_INTERNAL_ERROR)
            getObject().on_exception(ServerInternalException(m_reply._header().retMsg()));
    }
}

void Calculator_additionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}


Calculator_subtractionTask::Calculator_subtractionTask(Calculator_subtractionCallbackHandler &obj) :
    DDSAsyncTask(), m_obj(obj)
{
}

Calculator_subtractionTask::~Calculator_subtractionTask()
{
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
    int32_t  subtraction_ret = 0;
    ReturnMessage retcode = OPERATION_SUCCESSFUL;
    
    retcode = (ReturnMessage)m_reply._header().retCode();
    subtraction_ret = m_reply.unio().subtraction().subtraction_ret(); 
        
    if(retcode == OPERATION_SUCCESSFUL)
    {
        getObject().subtraction(subtraction_ret);
    }
    else
    {
        if(retcode == SERVER_INTERNAL_ERROR)
            getObject().on_exception(ServerInternalException(m_reply._header().retMsg()));
    }
}

void Calculator_subtractionTask::on_exception(const SystemException &ex)
{
    getObject().on_exception(ex);
}

