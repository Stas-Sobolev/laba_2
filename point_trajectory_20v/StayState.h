#pragma once
#include "FlyState.h"
class StayState : public State
{
	// ������������ ����� State
	virtual void change_body(time_ _delta, Body* body) override;
};

