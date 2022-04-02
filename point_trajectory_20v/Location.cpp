#include "Location.h"
#include "TaskBody.h"

std::string Location::description() const
{
	return "location";
}

std::vector<std::string> Location::tick(time_ delta)
{
	std::vector<std::string> result;
	
	for (auto sprite :_sprites)
	{
		sprite->tick(delta);
		result.push_back(sprite->get_point());
	}

	return result;
}

void Location::set_gravity(acceleration_ gravity)
{
	_gravity = gravity;
}

void Location::set_width(coordinate_ width)
{
	_width = width;
}

void Location::set_height(coordinate_ height)
{
	_height = height;
}

acceleration_ Location::get_gravity() const
{
	return _gravity;
}

coordinate_ Location::get_width() const
{
	return _width;
}

coordinate_ Location::get_height() const
{
	return _height;
}

void Location::add_sprite(Sprite* sprite)
{
	_sprites.push_back(sprite);
}

void Location::fly(speed_ V, conner_ con)
{
	std::list<Sprite*> copy_sprites(_sprites);
	for (auto sprite : copy_sprites)
		if (sprite->description() == "task_body")
			((TaskBody*)sprite)->fly(V, con);
}

void Location::engines(speed_ V)
{
	std::list<Sprite*> copy_sprites(_sprites);
	for (auto sprite : copy_sprites)
		if (sprite->description() == "task_body")
			((TaskBody*)sprite)->engines_on(V);
}

void Location::stop()
{
	std::list<Sprite*> copy_sprites(_sprites);
	for (auto sprite : copy_sprites)
		if (sprite->description() == "task_body")
			((TaskBody*)sprite)->stop();
}

Location::Location(coordinate_ height, coordinate_ width, acceleration_ gravity, const std::list<Sprite*>& sprites):
	_height(height), _width(width), _gravity(gravity), _sprites(sprites){}

Location::Location(const Location& orig)
{
	_width = orig._width;
	_height = orig._height;
	_gravity = orig._gravity;
	for (auto sprite : orig._sprites)
		_sprites.push_back(sprite->clone());
}

const Location& Location::operator=(const Location& orig)
{
	if (this == &orig)
		return *this;
	if (!(this->_sprites.empty()))
		for (auto it = _sprites.begin(); it != _sprites.end(); it++)
			delete (*it);
	_sprites.clear();
	for (auto sprite : orig._sprites)
		_sprites.push_back(sprite->clone());
	return *this;
}

Location::~Location()
{
	for (auto sprite : _sprites)
		delete sprite;
}


