#include "EntityManager.h"


EntityManager::EntityManager(void)
{
	entFirst = nullptr;
}

EntityManager::~EntityManager(void)
{
}

void EntityManager::Update(void)
{
	Entity *e;
	
	// update all entities
	e = entFirst;
	while (e)
	{
		e->Update();

		e = e->entNext;
	}

	// add entities
	e = toAdd.top();
	while (e)
	{
		AddUpdate(e);
		AddType(e);

		e->Added();

		toAdd.pop();
		e = toAdd.top();
	}

	// remove entities
	e = toRemove.top();
	while (e)
	{
		RemoveUpdate(e);
		RemoveType(e);

		e->Removed();

		toRemove.pop();
		e = toRemove.top();
	}
}

void EntityManager::Render(void)
{
	Entity *e = entFirst;

	while (e)
	{
		e->Render();

		e = e->entNext;
	}
}

Entity* EntityManager::Add(Entity *e)
{
	toAdd.push(e);
	return e;
}

Entity* EntityManager::Remove(Entity *e)
{
	toRemove.push(e);
	return e;
}

std::stack<Entity*> EntityManager::GetTypes(std::string type)
{
	std::stack<Entity*> list;

	Entity* e = typeFirst[type];
	while (e)
	{
		list.push(e);
		e = e->typeNext;
	}

	return list;
}

Entity* EntityManager::GetInstance(std::string name)
{
	return instances[name];
}

void EntityManager::AddUpdate(Entity *e)
{
	if (entFirst)
	{
		e->entNext = entFirst;
		e->entPrev = nullptr;
		entFirst = e;
	}
	else
	{
		e->entNext = nullptr;
		e->entPrev = nullptr;
		entFirst = e;
	}
}

void EntityManager::RemoveUpdate(Entity *e)
{
	if (e->entPrev) { e->entPrev = e->entNext; }
	if (e->entNext) { e->entNext = e->entPrev; }
}

void EntityManager::AddType(Entity *e)
{
	if (typeFirst[e->type])
	{
		e->typeNext = typeFirst[e->type];
		e->typePrev = nullptr;
		typeFirst[e->type] = e;
	}
	else
	{
		e->typeNext = nullptr;
		e->typePrev = nullptr;
		typeFirst[e->type] = e;
	}
}

void EntityManager::RemoveType(Entity *e)
{
	if (e->typePrev) { e->typePrev = e->typeNext; }
	if (e->typeNext) { e->typeNext = e->typePrev; }
}

