// 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int next_multiple;
	int i = 365;
	int j = 7;
	next_multiple = i + j - i%j;
	printf("next_multiple= %i/n", next_multiple);
	return 0;
}

