CC = g++
CFLAGS = -Wall -Werror -Wpedantic -std=c++17
LDFLAGS = -lgtest -lgtest_main -lpthread

SRC = Class1.cpp Class2.cpp Class3.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = tests

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(LDFLAGS) -o $@

%.o: %.cpp TemplateClass.h
	$(CC) $(CFLAGS) -c $< -o $@

dependencies: $(SRC) TemplateClass.h Class1.h Class2.h Class3.h
	$(CC) -MM $(SRC) > dependencies.mk

-include dependencies.mk

format:
	astyle -A1 -s4 *.cpp *.h
	rm -rf *.orig

.PHONY: clean

clean:
	rm -rf $(EXEC) $(OBJ) *.mk