#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: number to find the square root of
 * @i: The current divisor to check
 *
 * Return: natural square root of n, or -1 if no natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
