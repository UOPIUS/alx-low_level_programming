#include "main.h"
/**
* print_last_digit - Prints last of a number
* @c: number
* Description: outputs the sign of a number
* Return: Last digit of a number
*/
int print_last_digit(int c)
{
	int f = c % 10;

	if (f < 0)
		f = f * -1;
	_putchar(f + '0');
	return (f);
}
