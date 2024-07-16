#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len = 0, arg_len, i, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			arg_len++;
			total_len++;
		}
		total_len++;
	}
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			str[index++] = av[i][arg_len++];
		}
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
