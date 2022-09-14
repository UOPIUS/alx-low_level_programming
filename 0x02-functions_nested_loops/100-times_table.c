#include "main.h"
/**
* print_times_table - Multiplication table
* Description: prints multiplication table up to 9
*/
void print_times_table(int d)
{
	int n, multiplier, result;

	if(d > 0 && d <= 15) 
	{

		for (n = 0; n <= d; n++)
		{
			_putchar('0');
			for (multiplier = 1; multiplier <= d; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				result = n * multiplier;
				if (result < 10)
					_putchar(' ');
				else
					_putchar((result / d) + '0');
				_putchar((result % d) + '0');
			}
			_putchar('\n');
		}
	}
}
