/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"

class Decepticon: public Transformer
{
private:
    int anger;
    int dexterity;
public:
    Decepticon();
    Decepticon(int valueAnger, int valueDexterity);

    void transform() override;
    void openFire() override;
    void ulta() override;

    bool fight();

    void SetAnger(int);
    void SetDexterity(int);

    int GetAnger();
    int GetDexterity();
};

std::ostream& operator<<(std::ostream& os, Decepticon& decepticon);
bool operator<(Decepticon& decepticon1, Decepticon& decepticon2);
bool operator>(Decepticon& decepticon1, Decepticon& decepticon2);
bool operator==(Decepticon& decepticon1, Decepticon& decepticon2);

#endif
