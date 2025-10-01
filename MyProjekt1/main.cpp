#include <iostream>
#include "func.h"

using namespace std;

int main()
{

    int n;
    cout << "Enter number of points: ";
    cin >> n;

    Point* points = new Point[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << ":" << endl;
        points[i].input();
    }

    cout << "Entered points:" << endl;
    for (int i = 0; i < n; i++) {
        points[i].output();
        cout << endl;
    }

    findIntersectingPoints(points, n);

    delete[] points; 
    return 0;
}