#include "autobot.h"

Autobot::Autobot(int valueWisdom, int valueLuck) {
	wisdom = valueWisdom;
        luck = valueLuck;
}
Autobot::Autobot() : Autobot(0,0) {
}

bool Autobot::transform() {
	return true;
}

void Autobot::SetWisdom(int valueWisdom) {
        wisdom = valueWisdom;
}
void Autobot::SetLuck(int valueLuck) {
        luck = valueLuck;
}

int Autobot::GetWisdom() {
	return wisdom;
}
int Autobot::GetLuck() {
	return luck;
}
