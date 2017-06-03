
CPP=g++
SRC=main.cpp Cell.cpp Unit.cpp Archery.cpp Cavalry.cpp Lancer.cpp Player.cpp Field.cpp UI.cpp
LIB= -std=c++11
INC=-I ../include/
BIN=hola

all:	build	run	clean

build:
				echo 'build'
				$(CPP) $(LIB) $(SRC) $(INC) -o hola


clean:
				echo 'clean'
				rm -rf hola

run:
				echo 'ejecutando'
				./hola
