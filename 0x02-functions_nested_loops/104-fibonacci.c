#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long long int fib1 = 1;
	unsigned long long int fib2 = 2;
	unsigned long long int fib3;
	int i;

	printf("%llu, %llu, ", fib1, fib2);
	for (i = 3; i <= 98; i++)
	{
		fib3 = fib1 + fib2;
		printf("%llu", fib3);
		if (i != 98)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
