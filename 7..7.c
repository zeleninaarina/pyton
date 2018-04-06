// 7..7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int n = 150;
	int i;
	int P[151] = { 0 };
	for (i = 0; i <= n; i++) {
		P[i] = i;
	}
	for (i = 2; i * i <= n; i++) {
		if (P[i] != 0)
			for (int j = i * i; j <= n; j += i) {
				P[j] = 0;
			}
	}
	for (i = 0; i<n; i++) {
		if (P[i] != 0) {
			printf("%i\n", P[i]);
		}
	}
}

