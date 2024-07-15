#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main() 
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d", a, b);
	count = 2;

	while (count < 98)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return 0;
}
