#include "main.h"
/**
* print_to_98 - Prints numbers from n to 98
* @c: number
* Description: outputs the range between a number and 98
* Return: print digits
*/
void print_to_98(int c)
{
	int kounter = 98;

	if (c > 98)
	{
		while (c <= kounter)
		{
			printf("%d", c);
			c--;
		}
	}
	else
	{
		while (c < kounter)
		{
			printf("%d", c);
			c++;
		}
	}
}
