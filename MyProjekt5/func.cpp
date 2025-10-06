#include <iostream>
#include "structs.h"
#include "func.h"

using namespace std;

void EnterCircle_1(Circle& cr_1)
{
	cout << "Coordinate x center circle_1 = ";
	cin >> cr_1.x;
	cout << "Coordinate y center circle_1 = ";
	cin >> cr_1.y;
	cout << "Radius circle_1 = ";
	cin >> cr_1.R;
}

void EnterCircle_2(Circle & cr_2)
{
	cout << "Coordinate x center circle_2 = ";
	cin >> cr_2.x;
	cout << "Coordinate y center circle_2 = ";
	cin >> cr_2.y;
	cout << "Radius circle_2 = ";
	cin >> cr_2.R;
}

void EnterSquare_1(Square& sq_1)
{
	cout << "Coordinate x center square_1 = ";
	cin >> sq_1.x;
	cout << "Coordinate y center square_1 = ";
	cin >> sq_1.y;
	cout << "Side square_1 = ";
	cin >> sq_1.side;
}

void EnterSquare_2(Square& sq_2)
{
	cout << "Coordinate x center square_2 = ";
	cin >> sq_2.x;
	cout << "Coordinate y center square_2 = ";
	cin >> sq_2.y;
	cout << "Side square_2 = ";
	cin >> sq_2.side;
}

bool checkCircle_1Circle_2(Circle& cr_1, Circle& cr_2)
{
	double dx = abs(cr_1.x - cr_2.x);
	double dy = abs(cr_1.y - cr_2.y);
	double dR = cr_1.R + cr_2.R;
	return dx * dx + dy * dy <= dR * dR;
}

bool checkSquare_1Square_2(Square& sq_1, Square& sq_2)
{
	return abs(sq_1.x - sq_2.x) <= sq_1.side/2.0 + sq_2.side/2.0 && abs(sq_1.y - sq_2.y) <= sq_1.side/2.0 + sq_2.side/2.0;
}

bool checkSquare_1Circle_1(Square& sq_1, Circle& cr_1)
{
		double halfSide = sq_1.side / 2.0;
		double dx = abs(cr_1.x - sq_1.x);
		double dy = abs(cr_1.y - sq_1.y);

		if (dx > halfSide + cr_1.R) return false;
		if (dy > halfSide + cr_1.R) return false;

		if (dx <= halfSide) return true;
		if (dy <= halfSide) return true;

		double cornerDistSq = (dx - halfSide) * (dx - halfSide) +
			(dy - halfSide) * (dy - halfSide);

		return cornerDistSq <= (cr_1.R * cr_1.R);
	}

bool checkSquare_2Circle_2(Square& sq_2, Circle& cr_2)
{
	double halfSide = sq_2.side / 2.0;
	double dx = abs(cr_2.x - sq_2.x);
	double dy = abs(cr_2.y - sq_2.y);

	if (dx > halfSide + cr_2.R) return false;
	if (dy > halfSide + cr_2.R) return false;

	if (dx <= halfSide) return true;
	if (dy <= halfSide) return true;

	double cornerDistSq = (dx - halfSide) * (dx - halfSide) +
		(dy - halfSide) * (dy - halfSide);

	return cornerDistSq <= (cr_2.R * cr_2.R);
}

void printResult(Circle& cr_1, Circle& cr_2, Square& sq_1, Square sq_2)
{
	if (checkCircle_1Circle_2(cr_1, cr_2))
	{
		cout << "The circle_1 intersects with the circle_2" << endl;
	}
	else cout << "The circle_1 does not intersect the circle_2" << endl;

	if (checkSquare_1Square_2(sq_1, sq_2))
	{
		cout << "The square_1 intersects with the square_2" << endl;
	}
	else cout << "The square_1 does not intersect the square_2" << endl;

	if (checkSquare_1Circle_1(sq_1, cr_1))
	{
		cout << "The square_1 intersects with the circle_1" << endl;
	}
	else cout << "The square_1 does not intersect the circle_1" << endl;

	if (checkSquare_2Circle_2(sq_2, cr_2))
	{
		cout << "The square_2 intersects with the circle_2" << endl;
	}
	else cout << "The square_2 does not intersect the circle_2" << endl;
}
