// Àç±Í ÇÔ¼ö - ÆÑÅä¸®¾ó

#include <stdio.h>

int factorial(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);
	}
}

int main()
{
	printf("0! = %d \n", factorial(0));
	printf("1! = %d \n", factorial(1));
	printf("2! = %d \n", factorial(2));
	printf("3! = %d \n", factorial(3));
	printf("10! = %d \n", factorial(10));
	return 0;
}