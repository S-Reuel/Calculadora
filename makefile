CC = gcc

CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -Isrc

TARGET = bin/calculadora 

MAIN = src/main.c 

SOURCES = $(filter-out src/main.c, $(wildcard src/*.c)) 

.PHONY: all run test clean

all: $(TARGET)

$(TARGET): $(MAIN) $(SOURCES) 
	@mkdir -p bin 
	$(CC) $(CFLAGS) $(MAIN) $(SOURCES) -o $(TARGET)

run: $(TARGET) 
	./$(TARGET)

clean: 
	rm -rf bin