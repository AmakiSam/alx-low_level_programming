#include "main.h"

/**
 * main - entry point, prints first 98 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		_putchar(',');
		_putchar(' ');
		print_num(c);
		a = b;
		b = a;
	}
	_putchar('\n');
	return (0);
}
/**
 * print_num - prints an unsigned long int number
 * @n: number to print
 */
void print_num(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		print_num(n / 10);
	_putchar(n % 10 + '0');
}
