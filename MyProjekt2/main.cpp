#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

int main() {
    cout << "Square Calculator" << endl;

    Square mySquare = readSquare();
    cout << endl;

    printSquare(mySquare);
    cout << endl;

    cout << "Perimeter: " << calculatePerimeter(mySquare) << endl;
    cout << "Area: " << calculateArea(mySquare) << endl;

    return 0;
}