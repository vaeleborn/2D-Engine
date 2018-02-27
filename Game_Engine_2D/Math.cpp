#include "Math.h"
using namespace Math;

double MathFunctions::PI = 3.1415926536;
double MathFunctions::e = 2.7182818285;

int MathFunctions::RandomNumber(int min, int max)
{
	int num;
	num = rand() % (max - min + 1) + min;
	return num;
}