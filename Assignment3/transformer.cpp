#include "transformer.h"


Transformer::Transformer(int valueLevel, int valueStrength) {
	level = valueLevel;
        strength = valueStrength;
//        Wheels wheels;
//	this.wheels = new Wheels;
}
Transformer::~Transformer() {
	
}


bool Transformer::Wheels::move() {
	return true;
}
bool Transformer::move() {
	return wheels.move();
}

bool Transformer::fire() {
        ammo--;
	return true;
}
bool Transformer::transform() {
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
