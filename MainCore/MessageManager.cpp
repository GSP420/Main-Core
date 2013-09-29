#include "MessageManager.h"
#include "Windows.h"

MSG msg;

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
	while(GetMessage(&Msg, NULL, 0, 0) > 0)
		{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}
}

void MessageManager::Add(Message message)
{
	// set message->msgNext to msgFirst
	msgNext = msgFirst;
	// set msgFirst to message
	msgFirst = message;
}
