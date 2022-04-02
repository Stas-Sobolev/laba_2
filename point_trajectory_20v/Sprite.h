#pragma once
#ifndef SPRITE_H_
#define SPRITE_H_
#include"WorldPoint.h"

class Sprite : public WorldObject
{
private:
	World* _world;
	WorldPoint _place;
public:
	std::string get_point() const;
	World* get_world() const;
	const WorldPoint& get_place() const;

	void set_place(const WorldPoint& place);
	void set_world(World* world);

	Sprite(World* world, coordinate_ x, coordinate_ y);
	Sprite(World* world, const WorldPoint& place);

};

#endif // !SPRITE_H_
