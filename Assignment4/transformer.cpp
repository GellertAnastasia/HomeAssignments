/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include "transformer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, Transformer& transformer)
{
    return os << "Трансформер: уровень = " << transformer.GetLevel() << ", сила = " << transformer.GetStrength();
}
bool operator<(Transformer& transformer1, Transformer& transformer2)
{
    return transformer1.GetStrength() < transformer2.GetStrength();
}
bool operator>(Transformer& transformer1, Transformer& transformer2)
{
    return transformer1.GetStrength() > transformer2.GetStrength();
}
bool operator==(Transformer& transformer1, Transformer& transformer2)
{
    return transformer1.GetStrength() == transformer2.GetStrength();
}

Transformer::Transformer(int valueLevel, int valueStrength)
{
    level = valueLevel;
    strength = valueStrength;
    wheels = new Wheels;
}
Transformer::Transformer() : Transformer(0,0)
{
}
Transformer::~Transformer()
{
    delete wheels;
}

bool Transformer::strike(Sword sword)
{
    sword.strike();
    return true;
}
bool Transformer::move()
{
    wheels->move();
    return true;
}
bool Transformer::fire()
{
    ammo--;
    return true;
}
bool Transformer::ultimate()
{
    level++;
    strength++;
    fuel--;
    return true;
}
bool Transformer::jump()
{
    fuel--;
    return true;
}

void Transformer::SetFuel(int valueFuel)
{
    fuel = valueFuel;
}
void Transformer::SetAmmo(int valueAmmo)
{
    ammo = valueAmmo;
}
void Transformer::SetLevel(int valueLevel)
{
    level = valueLevel;
}
void Transformer::SetStrength(int valueStrength)
{
    strength = valueStrength;
}

int Transformer::GetFuel()
{
    return fuel;
}
int Transformer::GetAmmo()
{
    return ammo;
}
int Transformer::GetLevel()
{
    return level;
}
int Transformer::GetStrength()
{
    return strength;
}
