#include "main.h"

/**
 * print_diagonal - prints a diagonal line using the '\' character
 * @n: number of times the character '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
