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

testTransformer: test-transformer.o transformer.o wheels.o sword.o
	g++ test-transformer.o transformer.o wheels.o sword.o -o testTransformer -lgtest -lgtest_main -pthread
test-transformer.o: test-transformer.cpp
	g++ -c test-transformer.cpp

testAutobot: test-autobot.o transformer.o autobot.o wheels.o sword.o
	g++ test-autobot.o transformer.o autobot.o wheels.o sword.o -o testAutobot -lgtest -lgtest_main -pthread
test-autobot.o: test-autobot.cpp
	g++ -c test-autobot.cpp

testDecepticon: test-decepticon.o transformer.o decepticon.o wheels.o sword.o
	g++ test-decepticon.o transformer.o decepticon.o wheels.o sword.o -o testDecepticon -lgtest -lgtest_main -pthread
test-decepticon.o: test-decepticon.cpp
	g++ -c test-decepticon.cpp

testAirbot: test-airbot.o transformer.o autobot.o airbot.o wheels.o sword.o
	g++ test-airbot.o transformer.o autobot.o airbot.o wheels.o sword.o -o testAirbot -lgtest -lgtest_main -pthread
test-airbot.o: test-airbot.cpp
	g++ -c test-airbot.cpp

testSword: test-sword.o sword.o
	g++ test-sword.o sword.o -o testSword -lgtest -lgtest_main -pthread
test-sword.o: test-sword.cpp
	g++ -c test-sword.cpp

testWheels: test-wheels.o wheels.o
	g++ test-wheels.o wheels.o -o testWheels -lgtest -lgtest_main -pthread
test-wheels.o: test-wheels.cpp
	g++ -c test-wheels.cpp
	
tests: test-transformer.o test-autobot.o test-decepticon.o test-airbot.o test-sword.o test-wheels.o
	g++ test-transformer.o test-autobot.o test-decepticon.o test-airbot.o test-sword.o test-wheels.o transformer.o autobot.o decepticon.o airbot.o sword.o wheels.o -o tests -lgtest -lgtest_main -pthread

clean:
	rm -rf *.o myProg testTransformer testAutobot testDecepticon testAirbot testSword testWheels tests
