#pragma once
#ifndef BODY_H_
#define BODY_H_
#include "Location.h"
class Body : public Sprite
{
private:
	speed_ Vx;
	speed_ Vy;
public:

	void set_Vx(speed_ Vx);
	void set_Vy(speed_ Vy);
	speed_ get_Vx();
	speed_ get_Vy();

	virtual void fly(speed_ V, conner_ alpha) = 0;
	virtual void stop() = 0;
	virtual void engines_on(speed_ V1) = 0;

	//constructors
	Body(World* world, const WorldPoint& place, speed_ Vx, speed_ Vy);
	Body(World* world, coordinate_ x, coordinate_ y, speed_ Vx, speed_ Vy);


};

#endif // !1




