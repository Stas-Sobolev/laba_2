#pragma once
#ifndef LOCATION_H_
#define LOCATION_H_

#include<list>
#include "Sprite.h"

class Location : public World
{
private:
	coordinate_ _height;
	coordinate_ _width;
	acceleration_ _gravity;
	std::list<Sprite*> _sprites;

public:

	// Унаследовано через World
	virtual std::string description() const override;

	virtual std::vector<std::string> tick(time_ delta) override;

	virtual void set_gravity(acceleration_ _gravity) override;

	virtual void set_width(coordinate_ _width) override;

	virtual void set_height(coordinate_ _height) override;

	virtual acceleration_ get_gravity() const override;

	virtual coordinate_ get_width() const override;

	virtual coordinate_ get_height() const override;

	virtual void add_sprite(Sprite* _sprite) override;

	void fly(speed_ V, conner_);
	void engines(speed_ V);
	void stop();

	//constructors
	Location(coordinate_ height, coordinate_ width, acceleration_ gravity, const std::list<Sprite*>& sprites);
	~Location();
};

#endif