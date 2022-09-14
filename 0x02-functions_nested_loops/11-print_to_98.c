#include "main.h"
/**
* print_to_98 - Prints numbers from n to 98
* @c: number
* Description: outputs the range between a number and 98
* Return: print digits
*/
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", n);
	}
	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);

	}
}
