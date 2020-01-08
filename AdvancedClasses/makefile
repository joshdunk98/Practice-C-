# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

Line: Line.o
	$(CXX) $(CXXFLAGS) -o Line Line.o

# The Line.o target can be written more simply

Line.o: Line.cpp Line.h
	$(CXX) $(CXXFLAGS) -c Line.cpp
