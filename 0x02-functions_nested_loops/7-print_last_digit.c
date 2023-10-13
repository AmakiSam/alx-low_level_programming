#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: number to find last digit of
 * Return: Last digit
 */

int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (i < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
