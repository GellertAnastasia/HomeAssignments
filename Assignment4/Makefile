PROJECT = transformer

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CCXFLAGS = -I. -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CCXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS=$(wildcard *.h)

SOURCES = main.cpp transformer.cpp autobot.cpp decepticon.cpp airbot.cpp sword.cpp wheels.cpp

OBJ = $(SOURCES:.cpp=.o)

TEST_SOURCES = test-transformer.cpp test-autobot.cpp test-decepticon.cpp test-airbot.cpp test-sword.cpp test-wheels.cpp
TEST_OBJ = $(TEST_SOURCES:.cpp=.o)


.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ) 
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ) 
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o
	rm -f $(PROJECT) 
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
