// This is the main DLL file.

#include "stdafx.h"
#include "Entity.h"

Entity::entity(void)
{
	eHealth = 0; 
};
Entity::~entity(void)
{
};
void Entity::Added(int eID)
{
	renderedItem.Load(eID);
};
void Entity::Update(int frames)
{
	renderedItem.Update(frames);
};
void Entity::Render(D3DXVECTOR3 Position)
{
	renderedItem.Render(position, renderedItem.GetRect());
};
void Entity::Removed(int eID)
{
	renderedItem.Removed(eID);
};
};