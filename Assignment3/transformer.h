#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Transformer {
private:
        int fuel;
        int ammo;
        int level;
        int strength;
public:
	bool fire();
	bool transform();
	bool jump();

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
