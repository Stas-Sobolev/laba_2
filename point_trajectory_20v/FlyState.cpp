#include "FlyState.h"

void FlyState::change_body(time_ _delta, Body* body)
{
	double x = body->get_place().get_x();
	double y = body->get_place().get_y();
	double g = body->get_world()->get_gravity();
	double Vx = body->get_Vx();
	double Vy = body->get_Vy();

	x = x + Vx * _delta;
	y = y + Vy * _delta - g * _delta * _delta / 2;
	Vy = Vy - g * _delta;
	
	body->set_Vx(Vx);
	body->set_Vy(Vy);
	body->set_place(WorldPoint(x, y, body->get_world()));

}
