// з7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	double rez;
	rez = (3.31 * pow(10, -8) * 2.01 * pow(10, -7)) / (7.16 * pow(10,-6) + 2.01 * pow(10,-8));
	printf("rez = %e/n", rez);
    return 0;
}

