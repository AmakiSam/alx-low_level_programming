#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter
 *
 * Return: factorial of n, -1 if negative error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
