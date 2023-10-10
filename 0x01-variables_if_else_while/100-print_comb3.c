#include <stdio.h>
/**
 * main - Entry point
 * Description: All possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int z;
	int w;

	for (z = '0'; z <= '9'; z++)
	{
		for (w = '0'; w <= '9'; w++)
		{
		if (z < w)
		{
			putchar(z);
			putchar(w);
			if (z == 89)
			{
				break;
			}

			if (z != '8' || (z == '8' && w != '9'))
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}

