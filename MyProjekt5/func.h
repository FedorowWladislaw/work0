#pragma once
#include "structs.h"

void EnterCircle_1(Circle& cr_1);
void EnterCircle_2(Circle& cr_2);
void EnterSquare_1(Square& sq_1);
void EnterSquare_2(Square& sq_2);

bool checkCircle_1Circle_2(Circle& cr_1, Circle& cr_2);
bool checkSquare_1Square_2(Square& sq_1, Square& sq_2);
bool checkSquare_1Circle_1(Square& sq_1, Circle& cr_1);
bool checkSquare_2Circle_2(Square& sq_2, Circle& cr_2);

void printResult(Circle& cr_1, Circle& cr_2, Square& sq_1, Square sq_2);