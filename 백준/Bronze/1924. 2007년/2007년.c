#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int x, y;
	scanf("%d%d", &x, &y);

	if (x == 2) y += 31;
	else if (x == 3) y += 59;
	else if (x == 4) y += 90;
	else if (x == 5) y += 120;
	else if (x == 6) y += 151;
	else if (x == 7) y += 181;
	else if (x == 8) y += 212;
	else if (x == 9) y += 243;
	else if (x == 10) y += 273;
	else if (x == 11) y += 304;
	else if (x == 12) y += 334;

	y %= 7;
	if (y == 1) printf("MON");
	else if (y == 2) printf("TUE");
	else if (y == 3) printf("WED");
	else if (y == 4) printf("THU");
	else if (y == 5) printf("FRI");
	else if (y == 6) printf("SAT");
	else if (y == 0) printf("SUN");

	return 0;
}