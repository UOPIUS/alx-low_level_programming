#include <stdio.h>
/**
* _isdigit - entry point of the program
* @d: integer
* Return: integer
*/
int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	else
		return (0);
}
