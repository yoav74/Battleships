#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

class Ship
{
private:
    char *name;
    int size;
    int hitsTaken;

public:
    Ship(const char *shipName, int shipSize);
    virtual ~Ship();
    virtual void takeHit();
    bool isSunk() const;
    void printShip()
    {
        std::cout << name << " " << hitsTaken << std::endl;
    }
};

class Carrier : public Ship
{
public:
    Carrier() : Ship("Carrier", 5) {};
};

class Battleship : public Ship
{
public:
    Battleship() : Ship("Battleship", 4)
    {
    }
};

class Cruiser : public Ship
{
public:
    Cruiser() : Ship("Cruiser", 3)
    {
    }
};
class Submarine : public Ship
{
public:
    Submarine() : Ship("Submarine", 3)
    {
    }
};

class Destroyer : public Ship
{
public:
    Destroyer() : Ship("Destroyer", 2)
    {
    }
};