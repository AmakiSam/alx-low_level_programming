#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/
int main(void)
{
	int count;
	unsigned long int a = 1, b = 2, next;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');

	for (count = 2; count < 98; count++)
	{
		next = a + b;
		_putchar(',');
		_putchar(' ');
		printf("%lu", next);

		a = b;
		b = next;
	}

	_putchar('\n');

	return (0);
}
