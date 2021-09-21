CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test test.o

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

