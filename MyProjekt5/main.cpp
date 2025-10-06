#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

int main()
{
	Circle Circle_1;
	Circle Circle_2;
	Square Square_1;
	Square Square_2;

	EnterCircle_1(Circle_1);
	EnterCircle_2(Circle_2);
	EnterSquare_1(Square_1);
	EnterSquare_2(Square_2);

	printResult(Circle_1, Circle_2, Square_1, Square_2);

	return 0;
}