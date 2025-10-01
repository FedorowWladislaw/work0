#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

int main() 
{
    Point point = readPoint();
    Circle circle = readCircle();
    Square square = readSquare();
   
    PrintResults(point, circle, square);

    return 0;
}
