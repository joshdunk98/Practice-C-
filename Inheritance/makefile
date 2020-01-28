# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CC = g++
CFLAGS = -g -std=c++14 -Wall
LDFLAGS = 
OBJFILES = Animal.o
TARGET = Animal

all: $(TARGET)

# ****************************************************
# Targets needed to bring the executable up to date

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~