#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Transformer {
private:
        int fuel;
        int ammo;
        int level;
        int strength;
	class Wheels {
	public:
		bool move();
	};
	Wheels wheels;
public:
/*	Transformer(int valueLevel, int valueStrength);
	~Transformer();
*/	
	bool fire();
	bool ultimate();
	bool jump();
	bool move();

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
