// dz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int x=sizeof(signed char);
	printf("size = %i \n", x);
	int y = sizeof(unsigned char);
	printf("size = %i \n", y);
	int z = sizeof(unsigned short);
	printf("size = %i \n", z);
	int c = sizeof(signed short);
	printf("size = %i \n", c);
	int b = sizeof(signed  int);
	printf("size = %i \n", b);
	int m = sizeof(unsigned int);
	printf("size = %i \n", m);
	int k = sizeof(unsigned long);
	printf("size = %i \n", k);
	int d = sizeof(signed long);
	printf("size = %i \n", d);
    return 0;
}

