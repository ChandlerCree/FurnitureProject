# Furniture program Makefile

output: main.o Furniture.o Table.o Bed.o
	g++ main.o Furniture.o Table.o Bed.o -o output

main.o: main.cpp Furniture.h Table.h Bed.h
	g++ -g -Wall -c main.cpp 

Furniture.o: Furniture.cpp Furniture.h
	g++ -g -Wall -c Furniture.cpp

Table.o: Table.cpp Furniture.cpp Table.h Furniture.h
	g++ -g -Wall -c Table.cpp 

Bed.o: Bed.cpp Bed.h Furniture.cpp Furniture.h
	g++ -g -Wall -c Bed.cpp 

clean: 
	rm main.o Furniture.o Table.o Bed.o myfurniture 
