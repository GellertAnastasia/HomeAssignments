/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "sword.h"
#include "wheels.h"
#include <iostream>

class Transformer {
private:
        int fuel;
        int ammo;
        int level;
        int strength;
        Wheels* wheels;
        Sword sword;
public:
	Transformer();
	Transformer(int valueLevel, int valueStrength);
	~Transformer();
	
	bool fire();
	bool ultimate();
	bool jump();
	bool move();
	bool strike(Sword sword);

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
