// Entity.h

#pragma once
// #include "*header*.h"   include header for rendering class
#include <string>
using namespace System;

class entity {
	*header* *animation*;	//pass animation through
	int x;
	int y;
	int eID;					//animation ID
	string eType;
	string eName
protected:
	{
		entity(void);
		~entity(void);
	};
public: 
	{
		void Add(int eID);
		void Update(int frames);
		void Render(D3DXRENDER3 Position);
		void Remove(int eID);

		//Getters
		const RECT GetRect()const { return renderedItem.GetRect(); }
		const int GetID()const { return eID; }

		//Setters
		void SetID(int iD) { eID = iD; }
		void SetEntity(string eName, string eType);

	};
}
