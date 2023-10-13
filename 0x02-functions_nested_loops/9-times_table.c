#include "main.h"
/**
 * times_table - table of 9
 */

void times_table(void)
{
	int row, clmn, result;

	for (row = 0; row < 10; row++)
	{
		for (clmn = 0; clmn < 10; clmn++)
		{
			result = (row * clmn);

			if (clmn == 0)
			{
				_putchar(result + '0');
			}
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
