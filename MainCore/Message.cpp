#include "Message.h"

Message::Message(std::string contents, IDispatcher *sender, IDispatcher *recipient)
{
	msgNext = nullptr;

	// set vars to parameters
}

Message::~Message(void)
{
}