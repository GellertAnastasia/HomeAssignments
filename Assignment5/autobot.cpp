/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include "autobot.h"

std::ostream& operator<<(std::ostream& os, Autobot& autobot)
{
    return os << "Autobot: wisdom = " << autobot.GetWisdom() << ", luck = " << autobot.GetLuck();
}
bool operator<(Autobot& autobot1, Autobot& autobot2)
{
    return autobot1.GetLuck() < autobot2.GetLuck();
}
bool operator>(Autobot& autobot1, Autobot& autobot2)
{
    return autobot1.GetLuck() > autobot2.GetLuck();
}
bool operator==(Autobot& autobot1, Autobot& autobot2)
{
    return autobot1.GetLuck() == autobot2.GetLuck();
}


Autobot::Autobot(int valueWisdom, int valueLuck)
{
    wisdom = valueWisdom;
    luck = valueLuck;
}
Autobot::Autobot() : Autobot(0,0)
{
}

bool Autobot::transform()
{
    return true;
}

void Autobot::SetWisdom(int valueWisdom)
{
    wisdom = valueWisdom;
}
void Autobot::SetLuck(int valueLuck)
{
    luck = valueLuck;
}

int Autobot::GetWisdom()
{
    return wisdom;
}
int Autobot::GetLuck()
{
    return luck;
}
