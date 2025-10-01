#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

Point readPoint()
{
    Point pn;
    cout << "Enter x coordinate point: ";
    cin >> pn.x;
    cout << "Enter y coordinate point: ";
    cin >> pn.y;
    return pn; 
}

Circle readCircle()
{
    Circle cr;
    cout << "Enter x coordinate center circle: ";
    cin >> cr.Center_x;
    cout << "Enter y coordinate center circle: ";
    cin >> cr.Center_y;
    cout << "Enter radius: ";
    cin >> cr.radius;
    return cr;  
}

Square readSquare()
{
    Square sq;
    cout << "Enter x coordinate center squar: ";
    cin >> sq.Center_x;
    cout << "Enter y coordinate center squar: ";
    cin >> sq.Center_y;
    cout << "Enter side: ";
    cin >> sq.side;
    return sq;  
}

bool PointIsideCircle(const Point& pn, const Circle& cr)
{
    double dx = pn.x - cr.Center_x;
    double dy = pn.y - cr.Center_y;

    double squaredDistance = dx * dx + dy * dy;
    double squaredRadius = cr.radius * cr.radius;

    return squaredRadius > squaredDistance;  
}

bool PointInsideSquare(const Point& pn, const Square& sq)
{
    double halfSide = sq.side / 2.0;

    double left = sq.Center_x - halfSide;
    double right = sq.Center_x + halfSide;

    double bottom = sq.Center_y - halfSide;
    double top = sq.Center_y + halfSide;

    return (pn.x > left) && (pn.x < right) &&
        (pn.y > bottom) && (pn.y < top);
}

void PrintResults(const Point& pn, const Circle& cr, const Square& sq)
{
    if (PointIsideCircle(pn, cr))  
    {
        cout << "Point inside Circle" << endl;
    }
    else {
        cout << "Point not inside Circle" << endl;
    }

    if (PointInsideSquare(pn, sq))  
    {
        cout << "Point inside Square" << endl;
    }
    else {
        cout << "Point not inside Square" << endl;
    }
}