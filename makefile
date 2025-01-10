main.exe: main.o Grid.o Ships.o
	g++ main.o Grid.o Ships.o -o main.exe
main.o: main.cpp
	g++ -c main.cpp
Grid.o: Grid.cpp
	g++ -c Grid.cpp
Ships.o: Ships.cpp
	g++ -c Ships.cpp