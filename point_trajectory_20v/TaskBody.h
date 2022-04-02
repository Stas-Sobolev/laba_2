#pragma once
#ifndef TASKBODY_H_
#define TASKBODY_H_

#include "EnginesState.h"
#include"cmath"
class TaskBody : public Body
{
private:

	State* _state;

public:

	// Унаследовано через Body
	Sprite* clone() const override;
	
	virtual std::string description() const override;

	virtual std::vector<std::string> tick(time_ delta) override;

	virtual void fly(speed_ V, conner_ alpha) override;

	virtual void stop() override;

	virtual void engines_on(speed_ V1) override;

	//constructions
	TaskBody(World* world, const WorldPoint& place, speed_ Vx, speed_ Vy);
	TaskBody(World* world, coordinate_ x, coordinate_ y, speed_ Vx, speed_ Vy);
	TaskBody(const TaskBody& orig);
	~TaskBody();



};

#endif // !1



