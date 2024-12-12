/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"

class Autobot: public Transformer
{
private:
    int wisdom;
    int luck;
public:
    Autobot(int valueWisdom, int valueLuck);
    Autobot();

    bool transform();

    void SetWisdom(int);
    void SetLuck(int);

    int GetWisdom();
    int GetLuck();
};

#endif
