#include "TaskBody.h"

Sprite* TaskBody::clone() const
{
    return new TaskBody(*this);
}

std::string TaskBody::description() const
{
    return "task_body";
}

std::vector<std::string> TaskBody::tick(time_ delta)
{
    _state->change_body(delta, this);
    return { " " };
}

void TaskBody::fly(speed_ V, conner_ alpha)
{
    double Vx = V * cos(alpha);
    double Vy = V * sin(alpha);
    set_Vx(Vx);
    set_Vy(Vy);

    delete _state;

    _state = new FlyState;
}

void TaskBody::stop()
{
    if (get_place().get_y() <= 0.1)
    {
        delete _state;
        
        _state = new StayState;
    }
}

void TaskBody::engines_on(speed_ V1)
{
    set_Vy(0);
    set_Vx(V1);

    delete _state;

    _state = new EnginesState;
}

TaskBody::TaskBody(World* world, const WorldPoint& place, speed_ Vx, speed_ Vy):Body(world,place,Vx,Vy)
{
    _state = new StayState;
}


TaskBody::TaskBody(World* world, coordinate_ x, coordinate_ y, speed_ Vx, speed_ Vy) :
    TaskBody(world, WorldPoint(x, y, world), Vx, Vy){}

TaskBody::TaskBody(const TaskBody& orig):TaskBody(get_world(),get_place(),get_Vx(),get_Vy())
{
    _state = orig._state->clone();
}





TaskBody::~TaskBody()
{
    delete _state;
}

