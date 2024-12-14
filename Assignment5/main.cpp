/* Anastasia Gellert st130144@student.spbu.ru
	assignment 4
*/

#include <iostream>
#include "decepticon.h"
#include "autobot.h"
#include "airbot.h"


int main()
{
    Transformer transformer;
    transformer.transform();
    transformer.openFire();
    transformer.ulta();
    
    Decepticon decepticon;
    decepticon.transform();
    decepticon.openFire();
    decepticon.ulta();
    
    Autobot autobot;
    autobot.transform();
    autobot.openFire();
    autobot.ulta();
    
    Airbot airbot;
    airbot.transform();
    airbot.openFire();
    airbot.ulta();
    
    std::cout<<""<<std::endl;
    
    Transformer *bot1 = &transformer;
    bot1->transform();
    bot1->openFire();
    bot1->ulta();
    
    Transformer *bot2 = &decepticon;
    bot2->transform();
    bot2->openFire();
    bot2->ulta();
    
    Transformer *bot3 = &autobot;
    bot3->transform();
    bot3->openFire();
    bot3->ulta();
    
    Transformer *bot4 = &airbot;
    bot4->transform();
    bot4->openFire();
    bot4->ulta();
    
    
}