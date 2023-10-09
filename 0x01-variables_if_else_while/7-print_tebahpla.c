#include<stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
