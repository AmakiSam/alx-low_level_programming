#include "main.h"

/**
 * _isdigit - checks if digit 0 through 9
 * @c: parameter to be checked
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
