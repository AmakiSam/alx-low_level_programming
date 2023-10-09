#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 lowercase
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
		putchar (b);
	for (b = 'a'; b <= 'f'; b++)
		putchar (b);
	putchar('\n');
	return (0);
}
