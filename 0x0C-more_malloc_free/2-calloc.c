#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of ellement in array
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	return (ptr);
}
