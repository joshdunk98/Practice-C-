# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CC = g++
CFLAGS = -g -std=c++14 -Wall
LDFLAGS = 
OBJFILES = Pointer.o
TARGET = Pointer

all: $(TARGET)

# ****************************************************
# Targets needed to bring the executable up to date

#Pointer: Pointer.o
#	$(CC) $(CFLAGS) -o Pointer Pointer.o

# The Line.o target can be written more simply

#Pointer.o: Pointer.cpp
#	$(CC) $(CFLAGS) -c Pointer.cpp

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
