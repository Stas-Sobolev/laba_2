#include "EnginesState.h"

void EnginesState::change_body(time_ _delta, Body* body)
{
	double x = body->get_place().get_x();
	double y = body->get_place().get_y();

	double Vx = body->get_Vx();
	x = x + Vx;

	body->set_place(WorldPoint(x, y, body->get_world()));
	
	
}

State* EnginesState::clone() const
{
	return new EnginesState(*this);
}
