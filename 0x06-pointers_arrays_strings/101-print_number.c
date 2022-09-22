#include "main.h"

/**
 * print_number - print out numbers
 * @n: any given integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
