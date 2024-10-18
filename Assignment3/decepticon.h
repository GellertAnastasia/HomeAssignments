#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon: public Transformer {
private:
	int anger;
	int dexterity;
public:
	Decepticon(int valueAnger, int valueDexterity);
	
	bool fight();
	
	void SetAnger(int);
	void SetDexterity(int);
	
	int GetAnger();
	int GetDexterity();
};

#endif
