#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

int main() {
    Krug myKrug = readkrug();
    printKrug(myKrug);

    double dlina = calculateDlina(myKrug);
    cout << "Dlina: " << dlina << endl;

    double ploshad = calculatePloshad(myKrug);
    cout << "Ploshad: " << ploshad << endl;

    return 0;
}