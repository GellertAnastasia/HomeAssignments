/* Anastasia Gellert st130144@student.spbu.ru
	assignment 5
*/

#ifndef AIRBOT_H
#define AIRBOT_H
#include "autobot.h"

class Airbot: public Autobot
{
private:
    int speed;
    int bravery;
public:
    Airbot();
    Airbot(int valueSpeed, int valueBravery);

    void transform() override;
    void openFire() override;
    void ulta() override;

    bool fly();

    void SetSpeed(int);
    void SetBravery(int);

    int GetSpeed();
    int GetBravery();
};

std::ostream& operator<<(std::ostream& os, Airbot& airbot);
bool operator<(Airbot& airbot1, Airbot& airbot2);
bool operator>(Airbot& airbot1, Airbot& airbot2);
bool operator==(Airbot& airbot1, Airbot& airbot2);

#endif
