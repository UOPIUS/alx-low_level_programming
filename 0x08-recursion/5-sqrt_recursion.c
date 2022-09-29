#include "main.h"

/**
 * _sqrt_recursion - Calculate the square root of a number
 * @n: integer
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @n: number
 * @i: counter
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
}
