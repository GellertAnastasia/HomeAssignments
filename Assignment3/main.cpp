#include <iostream>
#include "decepticon.h"
#include "autobot.h"
#include "airbot.h"

int main() {
	Airbot airbot(4,7);
	airbot.SetAmmo(50);
	airbot.fire();
	airbot.SetFuel(100);
        airbot.move();
        //airbot.fight();
	std::cout<<airbot.GetAmmo()<<std::endl;
	std::cout<<airbot.GetFuel()<<std::endl;
	std::cout<<airbot.GetSpeed()<<std::endl;
	std::cout<<airbot.GetStrength()<<std::endl;
	return 0;
}
