/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include "airbot.h"

std::ostream& operator<<(std::ostream& os, Airbot& airbot)
{
    return os << "Airbot: speed = " << airbot.GetSpeed() << ", bravery = " << airbot.GetBravery();
}
bool operator<(Airbot& airbot1, Airbot& airbot2)
{
    return airbot1.GetSpeed() < airbot2.GetSpeed();
}
bool operator>(Airbot& airbot1, Airbot& airbot2)
{
    return airbot1.GetSpeed() > airbot2.GetSpeed();
}
bool operator==(Airbot& airbot1, Airbot& airbot2)
{
    return airbot1.GetSpeed() == airbot2.GetSpeed();
}

Airbot::Airbot(int valueSpeed, int valueBravery) : Autobot(valueSpeed, valueBravery)
{
    speed = valueSpeed;
    bravery = valueBravery;
}
Airbot::Airbot() : Airbot(0,0)
{
}

bool Airbot::fly()
{
    return true;
}

void Airbot::SetSpeed(int valueSpeed)
{
    speed = valueSpeed;
}
void Airbot::SetBravery(int valueBravery)
{
    bravery = valueBravery;
}

int Airbot::GetSpeed()
{
    return speed;
}
int Airbot::GetBravery()
{
    return bravery;
}
