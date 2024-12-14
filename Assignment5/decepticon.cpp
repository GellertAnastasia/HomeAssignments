/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
*/

#include "decepticon.h"

std::ostream& operator<<(std::ostream& os, Decepticon& decepticon)
{
    return os << "Decepticon: anger = " << decepticon.GetAnger() << ", dexterity = " << decepticon.GetDexterity();
}
bool operator<(Decepticon& decepticon1, Decepticon& decepticon2)
{
    return decepticon1.GetAnger() < decepticon2.GetAnger();
}
bool operator>(Decepticon& decepticon1, Decepticon& decepticon2)
{
    return decepticon1.GetAnger() > decepticon2.GetAnger();
}
bool operator==(Decepticon& decepticon1, Decepticon& decepticon2)
{
    return decepticon1.GetAnger() == decepticon2.GetAnger();
}

Decepticon::Decepticon(int valueAnger, int valueDexterity)
{
    anger = valueAnger;
    dexterity = valueDexterity;
}
Decepticon::Decepticon() : Decepticon(0,0)
{
}

void Decepticon::transform()
{
    std::cout<<"decepticon: transform"<<std::endl;
}
void Decepticon::openFire()
{
    std::cout<<"decepticon: openFire"<<std::endl;
} 
void Decepticon::ulta()
{
    std::cout<<"decepticon: ulta"<<std::endl;
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
