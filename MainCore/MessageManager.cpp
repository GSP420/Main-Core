#include "MessageManager.h"

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
}

void MessageManager::Add(Message message)
{
	// set message->msgNext to msgFirst
	// set msgFirst to message
}