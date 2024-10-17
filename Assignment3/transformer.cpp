#include "transformer.h"

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
