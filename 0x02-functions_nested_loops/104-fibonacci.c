#include <stdio.h>
#include "main.h"
/**
 * main - print Fibonacci number to 98
 * Return: 0
 */

int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib3;
	int i;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 3; i < 98; i++)
	{
		fib3 = fib1 + fib2;
		printf("%lu", fib3);
		if (i != 97)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
