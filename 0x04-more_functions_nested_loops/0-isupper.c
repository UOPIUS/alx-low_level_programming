#include <stdio.h>
/**
* _isupper - entry point of the program
* @d: integer
* Return: integer
*/
int _isupper(int d)
{
	if (d >= 65 && d <= 90)
		return (1);
	else
		return (0);
}
