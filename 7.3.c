// 7.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	float c = 0.0, d = 0.0;
	int a = 0, b = 0, x;

	printf("Введите числа\n");
	scanf_s("%i", &x);
		if (x == 0) {

		printf("Кол-во четных: %i\n", a);
		printf("Среднее значение четных: %f\n", c / a);
		printf("Кол-во нечетных: %i\n", b);
		printf("Среднее значение нечетных: %f\n", d / b);
	}
		
	while (x != 0) {
		if (x % 2 == 0) {
			a++;
			c += x;

		}
		else {
			b++;
			d += x;

		}
	}

    return 0;
}

