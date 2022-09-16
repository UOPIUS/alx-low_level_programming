#include "main.h"
/**
 * print_diagonal - prints a diagonal line according to the number given
 * @len: length of expected line
 */
void print_diagonal(int len)
{
	int i, j;

	if (len > 0)
	{
		for (i = 1; i <= len; i++)
		{
			if (i > 1)
			{
				j = 1;
				while (j < i)
				{
					putchar(32);
					j++;
				}
			}
			putchar(92);
			putchar('\n');
		}
	}
	putchar('\n');
}
