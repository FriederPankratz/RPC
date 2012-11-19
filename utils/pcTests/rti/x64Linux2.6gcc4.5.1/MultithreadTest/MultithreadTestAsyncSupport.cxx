#include "MultithreadTestProxy.h"
#include "MultithreadTestAsyncSupport.h"
#include "exceptions/ServerInternalException.h"
#include "MultithreadTestRequestReplyPlugin.h"


MultithreadTest_testTask::MultithreadTest_testTask(MultithreadTest_testCallbackHandler &obj,
   eProsima::RPCDDS::Client *client) : AsyncTask(client), m_obj(obj)
{
    MultithreadTest_testReply_initialize(&m_reply);
}

MultithreadTest_testTask::~MultithreadTest_testTask()
{
    MultithreadTest_testReply_finalize(&m_reply);
}

MultithreadTest_testCallbackHandler& MultithreadTest_testTask::getObject()
{
    return m_obj;
}

void* MultithreadTest_testTask::getReplyInstance()
{
    return &m_reply;
}

void MultithreadTest_testTask::execute()
{  
    Dato dato2;
        
    DDS_Long  test_ret = 0;    
    eProsima::RPCDDS::ReturnMessage retcode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
	
	MultithreadTest_testReplyUtils::extractTypeData(m_reply, retcode, dato2, test_ret);
		
	if(retcode == eProsima::RPCDDS::OPERATION_SUCCESSFUL)
	{
		getObject().test(dato2, test_ret);
	}
	else
	{
		if(retcode == eProsima::RPCDDS::SERVER_INTERNAL_ERROR)
		    getObject().on_exception(eProsima::RPCDDS::ServerInternalException(m_reply.header.rpcddsRetMsg));
	}
}

void MultithreadTest_testTask::on_exception(const eProsima::RPCDDS::SystemException &ex)
{
    getObject().on_exception(ex);
}