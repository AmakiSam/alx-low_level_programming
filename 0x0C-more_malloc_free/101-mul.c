#include "main.h"

/**
 * validate_and_print_error - check if inputs are valid and print error if not
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
void validate_and_print_error(int argc, char *argv[])
{
	int i;
	char *error = "Error\n";

	if (argc != 3)
	{
		while (*error)
		{
			_putchar(*error);
			error++;
		}
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		char *str = argv[i];

		while (*str)
		{
			if (*str < '0' || *str > '9')
			{
				while (*error)
				{
					_putchar(*error);
					error++;
				}
				exit(98);
			}
			str++;
		}
	}
}

/**
 * int_and_mult - initializes result array and performs multipy
 * @num1: first number
 * @num2: second number
 * @result: the result array
 * @len1: length of the first number
 * @len2: length of the second number
 */
void int_and_mult(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, carry, n1, n2;

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry)
			result[i + j + 1] += carry;
	}
}

/**
 * print_result - prints the final result
 * @result: the result array
 * @len: the length of the result array
 */
void print_result(int *result, int len)
{
	int i = 0;

	while (i < len && result[i] == 0)
		i++;

	if (i == len)
		_putchar('0');
	else
	{
		for (; i < len; i++)
			_putchar(result[i] + '0');
	}

	_putchar('\n');
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: void
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
		exit(98);

	int_and_mult(num1, num2, result, len1, len2);
	print_result(result, len1 + len2);

	free(result);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	validate_and_print_error(argc, argv);
	multiply(argv[1], argv[2]);
	return (0);
}
