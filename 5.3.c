// 5.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int n,number;
	number = 0;
	for (n = 5; n <= 50; n = n + 5)
	{
		number = n * (n + 1) / 2;
		printf("%2i     %2i\n", n, number);
	}
    return 0;
}

