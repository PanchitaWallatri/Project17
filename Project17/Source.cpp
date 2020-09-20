#include<stdio.h>
int main()
{
	int x, y, p = 2, gcd = 1;
	printf("enter first number : ");
	scanf_s("%d", &x);
	printf("enter second number : ");
	scanf_s("%d", &y);
	while ((p < x) && (p < y))
	{
		if ((x % p == 0) && (y % p == 0)) { x = x / p; y = y / p; gcd = gcd * p; p = 2; }
		else p = p + 1;
	}
	printf("greatest common divisor = %d\n", gcd);
	return 0;
}