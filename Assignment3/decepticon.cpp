#include "decepticon.h"

Decepticon::Decepticon(int valueAnger, int valueDexterity) {
	anger = valueAnger;
        dexterity = valueDexterity;
}

bool Decepticon::fight() {
	return true;
}

void Decepticon::SetAnger(int valueAnger) {
	anger = valueAnger;
}
void Decepticon::SetDexterity(int valueDexterity) {
	dexterity = valueDexterity;
}

int Decepticon::GetAnger() {
	return anger;
}
int Decepticon::GetDexterity() {
	return dexterity;
}
