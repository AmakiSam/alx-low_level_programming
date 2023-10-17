#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num++;
	return (num);
}
