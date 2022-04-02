#pragma once
#include "State.h"
class FlyState : public State
{
	// Унаследовано через State
	virtual void change_body(time_ _delta, Body* body) override;
	State* clone() const override;
};

