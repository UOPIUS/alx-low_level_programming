#include "main.h"
/**
* print_sign - Prints the sign of a number
* @c: number
* Description: outputs the sign of a number
* Return: 0 or 1 or -1
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+' + '0');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0' + '0');
		return (0);
	}
	else
	{
		_putchar('-' + '0');
		return (-1);
	}
}
