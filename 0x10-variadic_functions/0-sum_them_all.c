#include "variadic_functions.h"

/**
 * sum_them_all - add a variable number of arguments passed
 * @n: variable count
 * @...: variable parameters
 * Return: a value
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list pointer;

	if (n == 0)
		return (0);

	va_start(pointer, n);
	for (k = 0; k < n; k++)
		sum += va_arg(pointer, int);
	va_end(pointer);
	return (sum);
}
