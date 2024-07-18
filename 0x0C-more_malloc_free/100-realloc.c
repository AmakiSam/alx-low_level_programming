#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: size of allocated space for ptr
 * @new_size: new size of memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *old_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	old_ptr = (char *)ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)new_ptr)[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
