#include "main.h"
/**
 * _strncat - function that concatenates two strings (_strncat)
 * @dest: destination
 * @src: source
 * @n: most bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int x;

	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[length + x] = *src;
		src++;
	}
	dest[length + x] = '\0';
	return (dest);
}
