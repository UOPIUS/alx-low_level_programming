#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: input
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check for a prime number
 * @n: given number
 * @i: divisor
 * Return: integer
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}