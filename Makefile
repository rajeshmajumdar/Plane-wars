TARGET ?= main.cc
OUTPUT ?= main

LIB_FILES = /usr/local/Cellar/sfml/2.5.1_1/lib
INCLUDE_FILES = /usr/local/Cellar/sfml/2.5.1_1/include

install:
	g++ $(TARGET) -I $(INCLUDE_FILES) -o $(OUTPUT) -L $(LIB_FILES) -lsfml-graphics -lsfml-window -lsfml-system
