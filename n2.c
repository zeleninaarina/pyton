// n2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char k[100] = "Политех";
	char *s = k;
	char second[100] = "Петра";
	char *c = second;
	strcat(s, c);
	puts(s);
    return 0;
}

