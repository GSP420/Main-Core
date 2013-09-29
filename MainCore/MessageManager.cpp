#include "MessageManager.h"
#include "Windows.h"

MessageManager::MessageManager(void)
{
	msgFirst = nullptr;
}

MessageManager::~MessageManager(void)
{
}

void MessageManager::Update(void)
{
	// loop through messages
		// send them to the proper entity
		// remove from list
	While(GetMessage(&Msg,NULL,0,0)>0)
		{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
		}
}

void MessageManager::Add(Message message)
{
	// set message->msgNext to msgFirst
	msgNext = msgFirst;
	// set msgFirst to message
	msgFirst = message;
}
