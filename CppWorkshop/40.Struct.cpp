// Struct example.
#include <iostream>
#include <string>

struct Coordinate
{
    float x = 0;
    float y = 0;
};

int main()
{
    Coordinate myCoordinate;
    myCoordinate.x = 1;
    myCoordinate.y = 2;
    std::cout << "Coordinate: " << myCoordinate.x << ", " << myCoordinate.y;
}