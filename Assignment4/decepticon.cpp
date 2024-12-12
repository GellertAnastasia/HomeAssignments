/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include "decepticon.h"

Decepticon::Decepticon(int valueAnger, int valueDexterity)
{
    anger = valueAnger;
    dexterity = valueDexterity;
}
Decepticon::Decepticon() : Decepticon(0,0)
{
}

bool Decepticon::fight()
{
    return true;
}

void Decepticon::SetAnger(int valueAnger)
{
    anger = valueAnger;
}
void Decepticon::SetDexterity(int valueDexterity)
{
    dexterity = valueDexterity;
}

int Decepticon::GetAnger()
{
    return anger;
}
int Decepticon::GetDexterity()
{
    return dexterity;
}
