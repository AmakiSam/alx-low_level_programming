#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 * Return: str
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index] == ' ' ||
			str[index] == '\n' ||
			str[index] == '\t' ||
			str[index] == ',' ||
			str[index] == ';' ||
			str[index] == '.' ||
			str[index] == '?' ||
			str[index] == '!' ||
			str[index] == '"' ||
			str[index] == '(' ||
			str[index] == ')' ||
			str[index] == '{' ||
			str[index] == '}' ||
			index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
