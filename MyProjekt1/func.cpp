#include <iostream>
#include <cmath>
#include "func.h"
#include "structs.h"

using namespace std;

void Point::input()
{
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}

void Point::output()
{
    cout << x << ";" << y;
}

bool arePointsIntersecting(const Point& p1, const Point& p2)
{
    const double epsilon = 1e-5; 
    return fabs(p1.x - p2.x) < epsilon && fabs(p1.y - p2.y) < epsilon;
}


void findIntersectingPoints(Point* points, int n)
{
    cout << "Intersecting points:" << endl;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arePointsIntersecting(points[i], points[j])) {
                cout << "Point " << i + 1 << " (";
                points[i].output();
                cout << ") intersects with a point " << j + 1 << " (";
                points[j].output();
                cout << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No intersecting points found" << endl;
    }
}