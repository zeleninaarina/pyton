// 5.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int factorial = 1;
	
	for (int n = 1; n <= 10; n++) {
		factorial = factorial * n;

		printf("%2i      %i\n", n, factorial);
	}
    return 0;
}

