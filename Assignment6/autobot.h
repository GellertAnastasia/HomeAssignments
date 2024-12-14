/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
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

    void transform() override;
    void openFire() override;
    void ulta() override;

    void SetWisdom(int);
    void SetLuck(int);

    int GetWisdom();
    int GetLuck();
};

std::ostream& operator<<(std::ostream& os, Autobot& autobot);
bool operator<(Autobot& autobot1, Autobot& autobot2);
bool operator>(Autobot& autobot1, Autobot& autobot2);
bool operator==(Autobot& autobot1, Autobot& autobot2);

#endif
