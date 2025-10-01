#include <iostream>
#include <cmath>
#include "structs.h"
#include "func.h"

using namespace std;

Krug readkrug() {
    Krug krug;
    cout << "Enter x coordinate of circle center: ";
    cin >> krug.center.x;
    cout << "Enter y coordinate of circle center: ";
    cin >> krug.center.y;
    cout << "Enter circle radius: ";
    cin >> krug.R;
    return krug;
}

void printKrug(const Krug& krug) {
    cout << "Circle information:" << endl;
    cout << "Center: (" << krug.center.x << ", " << krug.center.y << ")" << endl;
    cout << "Radius: " << krug.R << endl;
}

double calculateDlina(const Krug& krug) {
    return 2 * 3.14 * krug.R;
}

double calculatePloshad(const Krug& krug) {
    return 3.14 * krug.R * krug.R;
}