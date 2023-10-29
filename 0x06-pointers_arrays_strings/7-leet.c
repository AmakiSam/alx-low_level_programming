#include "main.h"
/**
 * leet - function that encodes a string into 1337 format
 * @str: input string
 * Return: 0
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
