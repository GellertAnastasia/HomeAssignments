myProg: main.o calculate.o
	g++ main.o calculate.o -o myProg
main.o: calculate.h main.cpp
	g++ -c main.cpp
calculate.o: calculate.h calculate.cpp
	g++ -c calculate.cpp
clean:
	rm -rf *.o myProg
