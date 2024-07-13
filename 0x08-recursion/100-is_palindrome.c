#include "main.h"
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
    int len = 0;
    int i;
    while (s[len] != '\0')
        len++;
    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return 0;
    }
    return 1;
}
