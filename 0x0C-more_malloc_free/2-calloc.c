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
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
