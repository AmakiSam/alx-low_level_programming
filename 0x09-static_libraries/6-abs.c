#include "main.h"
/**
 * _abs - compute absolute value of an integer
 * @i: integer
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else if (i < 0)
		return (-i);

	return (0);
	_putchar('\n');
}
