/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include "transformer.h"
#include <iostream>

Transformer::Transformer(int valueLevel, int valueStrength) {
	level = valueLevel;
        strength = valueStrength;
        wheels = new Wheels;
}
Transformer::Transformer() : Transformer(0,0) {
}
Transformer::~Transformer() {
	delete wheels;
}

bool Transformer::strike(Sword sword) {
	sword.strike();
	return true;
}
bool Transformer::move() {
	wheels->move();
	return true;
}
bool Transformer::fire() {
        ammo--;
	return true;
}
bool Transformer::ultimate() {
        level++;
        strength++;
        fuel--;
        return true;
}
bool Transformer::jump() {
        fuel--;
        return true;
}

void Transformer::SetFuel(int valueFuel) {
	fuel = valueFuel;
}
void Transformer::SetAmmo(int valueAmmo) {
        ammo = valueAmmo;
}
void Transformer::SetLevel(int valueLevel) {
        level = valueLevel;
}
void Transformer::SetStrength(int valueStrength) {
        strength = valueStrength;
}

int Transformer::GetFuel() {
	return fuel;
}
int Transformer::GetAmmo() {
        return ammo;
}
int Transformer::GetLevel() {
        return level;
}
int Transformer::GetStrength() {
        return strength;
}
