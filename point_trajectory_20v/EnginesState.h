#pragma once
#include "StayState.h"
class EnginesState : public State
{
	// ������������ ����� State
	virtual void change_body(time_ _delta, Body* body) override;
	State* clone() const override;
};

