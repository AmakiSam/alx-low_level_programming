#include "main.h"
#include <stdio.h>

/**
* _putchar - Custom putchar function
*/
int _putchar(char c)
{
return putchar(c);
}

/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
int first = 1, second = 2, next;
int i;

_putchar('1');
_putchar(',');
_putchar(' ');

_putchar('2');

for (i = 3; i <= 98; ++i)
{
next = first + second;

if (i != 98) {
_putchar(',');
_putchar(' ');
}

printf("%d", next);

first = second;
second = next;
}
_putchar('\n');

return (0);
}
