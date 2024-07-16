#include "main.h"

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: string to copy to new memory
 *
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *copy;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);
}
