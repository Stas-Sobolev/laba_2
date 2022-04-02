#include "Body.h"

void Body::set_Vx(speed_ Vx)
{
	Body::Vx = Vx;
}

void Body::set_Vy(speed_ Vy)
{
	Body::Vy = Vy;
}

speed_ Body::get_Vx()
{
	return Vx;
}

speed_ Body::get_Vy()
{
	return Vy;
}

Body::Body(World* world, const WorldPoint& place, speed_ Vx, speed_ Vy):Sprite(world,place), Vx(Vx), Vy(Vy){}


Body::Body(World* world, coordinate_ x, coordinate_ y, speed_ Vx, speed_ Vy):Sprite(world,x,y), Vx(Vx), Vy(Vy){}


