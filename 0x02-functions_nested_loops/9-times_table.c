#include "main.h"
/**
* times_table - Multiplication table
* Description: prints multiplication table up to 9
*/
void times_table(void)
{
	int n, multiplier, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * multiplier;
			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
