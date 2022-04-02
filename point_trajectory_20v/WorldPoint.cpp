#include "WorldPoint.h"

void WorldPoint::set_x(coordinate_ x)
{
	if (x < _world->get_width() && x>0)
		_x = x;
}

void WorldPoint::set_y(coordinate_ y)
{
	if (y < _world->get_height() && y>0)
		_y = y;
}

void WorldPoint::set_world(World* world)
{
	_world = world;
}

coordinate_ WorldPoint::get_x() const
{
	return _x;
}

coordinate_ WorldPoint::get_y() const
{
	return _y;
}

World* WorldPoint::get_world() const
{
	return _world;
}

std::string WorldPoint::get_point() const
{
	return std::to_string(get_x()) + "\t" + std::to_string(get_y());
}

WorldPoint::WorldPoint(coordinate_ x, coordinate_ y, World* world) : _world(world) 
{
	set_x(x);
	set_y(y);
}


WorldPoint::WorldPoint(World* world) : WorldPoint(0, 0, world) {}

