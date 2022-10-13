#include "variadic_functions.h"

/**
 * print_numbers - print all numbers followed by a new line
 * @separator: separator
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k = 0;
	va_list args;

	if (separator != NULL && n != NULL)
	{
		va_start(args, n);
		for (; k < n; k++)
		{
			printf("%d", va_arg(args, int));
			if (k < n - 1)
				printf("%s", separator);
		}
		putchar('\n');
	}
}
