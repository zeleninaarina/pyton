// 6.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	float res = 0.0, x;
	char oper;

	printf("Введите выражение\n");
	while (oper !='E') {
		scanf_s("%f %c", &x, &oper);
		switch (oper) {
		case 'S':
			res = x;
			break;
		case '+':
			res += x;
			break;
		case '-':
			res -= x;
			break;
		case '*':
			res *= x;
			break;
		case '/':
			if (x == 0)
				printf("Нельзя делить на 0!\n");
			else
				res /= x;
			break;
		default:
			printf("Неизвесстная операция\n");
		}
		printf("= %f\n", res);
	}
    return 0;
}

