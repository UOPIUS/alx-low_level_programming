#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer input
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 2));
}
