#ifndef AIRBOT_H
#define AIRBOT_H
#include "autobot.h"

class Airbot: public Autobot {
private:
	int speed;
	int bravery;
public:
	Airbot(int valueSpeed, int valueBravery);

	bool fly();
	
	void SetSpeed(int);
	void SetBravery(int);

	int GetSpeed();
	int GetBravery();
};

#endif
