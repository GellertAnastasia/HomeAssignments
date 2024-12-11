/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include "airbot.h"

Airbot::Airbot(int valueSpeed, int valueBravery) : Autobot(valueSpeed, valueBravery) {
	speed = valueSpeed;
        bravery = valueBravery;
}
Airbot::Airbot() : Airbot(0,0) {
}

bool Airbot::fly() {
	return true;
}

void Airbot::SetSpeed(int valueSpeed) {
        speed = valueSpeed;
}
void Airbot::SetBravery(int valueBravery) {
        bravery = valueBravery;
}

int Airbot::GetSpeed() {
	return speed;
}
int Airbot::GetBravery() {
	return bravery;
}
