#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: array to reverse
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
