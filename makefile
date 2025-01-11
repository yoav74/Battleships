main.exe: main.o Grid.o Ships.o Player.o
	g++ main.o Grid.o Ships.o Player.o -o main.exe
main.o: main.cpp
	g++ -c main.cpp
Grid.o: Grid.cpp
	g++ -c Grid.cpp
Ships.o: Ships.cpp
	g++ -c Ships.cpp
Player.o: Player.cpp
	g++ -c Player.cpp