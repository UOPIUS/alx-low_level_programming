#include "main.h"
/**
* _abs - Prints the absolute value of a number
* @c: number
* Description: outputs the absolute value of a number
* Return: positive number
*/
int _abs(int c)
{
	if (c < 0)
		return (-1 * c);
	else
		return (c);
}
