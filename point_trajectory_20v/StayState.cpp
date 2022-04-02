#include "StayState.h"

void StayState::change_body(time_ _delta, Body* body)
{

}

State* StayState::clone() const
{
    return new StayState(*this);
}
