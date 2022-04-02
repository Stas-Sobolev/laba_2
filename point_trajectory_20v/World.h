#pragma once
#ifndef WORLD_H_
#define WORLD_H_
#include "WorldObject.h"
class Sprite;

class World : public WorldObject
{
public:
	virtual void set_gravity(acceleration_ _gravity) = 0;
	virtual void set_width(coordinate_ _width) = 0;
	virtual void set_height(coordinate_ _height) = 0;

	virtual acceleration_ get_gravity() const = 0;
	virtual coordinate_ get_width() const = 0;
	virtual coordinate_ get_height() const = 0;

	virtual void add_sprite(Sprite* _sprite) = 0;

	virtual void fly(speed_ V, conner_) = 0;
	virtual void engines(speed_ V) = 0;
	virtual void stop() = 0;
};
#endif