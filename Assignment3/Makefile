myProg: main.o transformer.o decepticon.o autobot.o airbot.o wheels.o sword.o
	g++ main.o transformer.o decepticon.o autobot.o airbot.o wheels.o sword.o -o myProg
main.o: transformer.h decepticon.h autobot.h airbot.h main.cpp
	g++ -c main.cpp
transformer.o: transformer.h transformer.cpp
	g++ -c transformer.cpp
decepticon.o: decepticon.h decepticon.cpp
	g++ -c decepticon.cpp
autobot.o: autobot.h autobot.cpp
	g++ -c autobot.cpp
airbot.o: airbot.h airbot.cpp
	g++ -c airbot.cpp
wheels.o: wheels.h wheels.cpp
	g++ -c wheels.cpp
sword.o: sword.h sword.cpp
	g++ -c sword.cpp
clean:
	rm -rf *.o myProg
