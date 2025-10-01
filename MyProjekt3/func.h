#pragma once
#include "structs.h"


Point readPoint();
Circle readCircle();
Square readSquare();
bool PointIsideCircle(const Point& pn, const Circle& cr);
bool PointInsideSquare(const Point& pn, const Square& sq);
void PrintResults(const Point& pn, const Circle& cr, const Square& sq);