GCC = g++
INC_SFML = /usr/local/Cellar/sfml/2.5.1_1/include
LIB_SFML = /usr/local/Cellar/sfml/2.5.1_1/lib
INCLUDE = include/game.hh

TARGET = src/main.cc
GAME_FILE = src/game.cc

OUTPUT = build/game

all:
	$(GCC) -I $(INC_SFML) -I $(INCLUDE) $(TARGET) $(GAME_FILE) -o $(OUTPUT) -lsfml-graphics -lsfml-window -lsfml-system

