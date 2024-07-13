#include "main.h"

int is_palindrome_helper(char *start, char *end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (is_palindrome_helper(s, s + _strlen_recursion(s) - 1));
}
/**
 * is_palindrome_helper - checks if string is palindrome
 * @start: first char
 * @end: last char
 *
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
