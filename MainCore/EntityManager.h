#pragma once
#include <map>
#include <stack>

// placeholder until entity is implemented
class Entity
{
public:
	std::string type;

	Entity *entNext;
	Entity *entPrev;

	Entity *typeNext;
	Entity *typePrev;

	Entity(void);
	~Entity(void);

	void Update(void);
	void Render(void);
	void Added(void);
	void Removed(void);
}; 

class EntityManager
{
private:
	// holds the most recently added entity
	Entity *entFirst;
	std::stack<Entity*> toAdd;
	std::stack<Entity*> toRemove;
	// holds entities recently added type
	std::map <std::string, Entity*> typeFirst;
	// holds individual entity instances
	std::map <std::string, Entity*> instances;

public:
	EntityManager(void);
	~EntityManager(void);

	// updates all of the entities
	void Update(void);
	// renders all of the entities
	void Render(void);

	// adds an entity at the end of the frame
	Entity* Add(Entity *e);
	// removes an entity at the end of the frame
	Entity* Remove(Entity *e);
	// gets all entities of the specified type
	std::stack<Entity*> GetTypes(std::string type);
	// gets the entity with the instance name
	Entity* GetInstance(std::string name);

	void AddUpdate(Entity *e);
	void RemoveUpdate(Entity *e);
	void AddType(Entity *e);
	void RemoveType(Entity *e);
	void AddInstance(Entity *e);
	void RemoveInstance(Entity *e);
};

