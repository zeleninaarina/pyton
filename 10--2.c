// 10--2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	const char baseDigits[] = { 0,1 };
	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;
	printf("Число\n");
	scanf_s("%ld", &numberToConvert);
	printf("основание\n");
	scanf_s("%i", &base);
	do {
		convertedNumber[index] = numberToConvert % base;
		++index;
		numberToConvert = numberToConvert / base;
	} 
	while (numberToConvert = !0);
	printf("Convert number=");
	for (--index; index >= 0; --index) {
		nextDigit = convertedNumber[index];
		printf("%c", baseDigits[nextDigit]);
	}
	

	printf("\n");
    return 0;
}

