myProg: main.o reverse.o
	g++ main.o reverse.o -o myProg
main.o: reverse.h main.cpp
	g++ -c main.cpp
reverse.o: reverse.h reverse.cpp
	g++ -c reverse.cpp
clean:
	rm -rf *.o myProg
