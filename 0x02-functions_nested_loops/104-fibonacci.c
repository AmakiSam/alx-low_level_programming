#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/
int main(void)
{
	unsigned long int a = 1, b = 2, c, i;

	printf("1, 2");

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
