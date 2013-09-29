#include "MainCore.h"

void MainCore::Startup(void)
{
	this->messageManager = new MessageManager();
	this->entityManager = new EntityManager();
	this->clock = new Clock();

	// init cores
}

void MainCore::Update(void)
{
	this->entityManager->Update();
	this->messageManager->Update();
	this->clock->Update();

	// update cores
}


void MainCore::Shutdown(void)
{
	// shutdown cores
}