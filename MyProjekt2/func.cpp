#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

Square readSquare() {
    Square sq;
    cout << "Enter top-left corner x: ";
    cin >> sq.x;
    cout << "Enter top-left corner y: ";
    cin >> sq.y;
    cout << "Enter side length: ";
    cin >> sq.side;
    if (sq.side <= 0) {
        cout << "Error: side must be positive! Set to 1.0" << endl;
        sq.side = 1.0;
    }
    return sq;
}

void printSquare(const Square& sq) {
    cout << "Square - Top-left: (" << sq.x << ", " << sq.y << "), Side: " << sq.side << endl;
}

double calculatePerimeter(const Square& sq) {
    return 4 * sq.side;
}

double calculateArea(const Square& sq) {
    return sq.side * sq.side;
}

