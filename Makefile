CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

test: test.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp test.cpp -o test