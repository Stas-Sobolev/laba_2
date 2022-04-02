#pragma once
#ifndef WORLDOBJECT_H_
#define WORLDOBJECT_H_
#include <string>
#include <vector>
#include "Type_List.h"
class WorldObject
{
public:
	virtual std::string description() const = 0;
	virtual std::vector<std::string> tick(time_ delta) = 0;
};

#endif