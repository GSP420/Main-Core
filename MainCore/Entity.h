// Entity.h

#pragma once
// #include "*header*.h"   include header for rendering class
#include <string>

class Entity
{
	//pass animation through
	//*header* *animation*;	
	int x;
	int y;
	int eID;					//animation ID

	std::string type;
	std::string name;

	Entity *entNext;
	Entity *entPrev;

	Entity *typeNext;
	Entity *typePrev;

	Entity(void);
	~Entity(void);

	void Added(int eID);
	void Update(int frames);
	void Render(D3DXRENDER3 Position);
	void Removed(int eID);

	//Getters
	const RECT GetRect()const { return renderedItem.GetRect(); }
	const int GetID()const { return eID; }

	//Setters
	void SetID(int iD) { eID = iD; }
	void SetEntity(std::string name, std::string type);
};
