#include "main.h"
/**
 * print_diagonal - prints a diagonal line according to the number given
 * @n: length of expected line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = 1;
			while (j < i)
			{
				putchar(' ');
				j++;
			}
			putchar(92);
			putchar('\n');
		}
	}
	putchar('\n');
}
