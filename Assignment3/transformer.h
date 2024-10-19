#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "sword.h"
#include "wheels.h"

class Transformer {
private:
        int fuel;
        int ammo;
        int level;
        int strength;
        Wheels wheels;
        Sword sword;
public:
	Transformer();
	Transformer(int valueLevel, int valueStrength);
	~Transformer();
	
	bool fire();
	bool ultimate();
	bool jump();
	bool move();
	bool strike();

	void SetFuel(int);
	void SetAmmo(int);
	void SetLevel(int);
	void SetStrength(int);

	int GetFuel();
	int GetAmmo();
	int GetLevel();
	int GetStrength();
	

};

#endif
