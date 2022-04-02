#pragma once
#ifndef STATE_H_
#define STATE_H_
#include "Body.h"
class State
{
public:

	virtual void change_body(time_ _delta, Body* body) = 0;
};

#endif // !STATE_H_
