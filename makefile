CC = gcc

CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -Isrc

TARGET = bin/calculadora 

TEST_TARGET = bin/tests/tests_exec

MAIN = src/main.c 

SOURCES = $(filter-out src/main.c, $(wildcard src/*.c)) 

TESTS = $(wildcard tests/*.c)

.PHONY: all run test clean

all: $(TARGET)

$(TARGET): $(MAIN) $(SOURCES) 
	@mkdir -p bin 
	$(CC) $(CFLAGS) $(MAIN) $(SOURCES) -o $(TARGET)

run: $(TARGET) 
	./$(TARGET)

test: $(TEST_TARGET) 
	./$(TEST_TARGET)

$(TEST_TARGET): $(SOURCES) $(TESTS) 
	@mkdir -p bin/tests 
	$(CC) $(CFLAGS) $(SOURCES) $(TESTS) -o $(TEST_TARGET)

clean: 
	rm -rf bin