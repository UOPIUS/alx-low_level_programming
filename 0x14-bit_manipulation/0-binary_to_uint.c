#include "main.h"

/**
 * stlen - calculate the length of a string
 * @c: string
 * Return: int
 */
int stlen(const char *c)
{
	int l = 0;

	while (c[l] != '\0')
		l++;
	return (l);
}

/**
* binary_to_uint - converts a binary to decimal
* @b: string
* Return: integer
*/
unsigned int binary_to_uint(const char *b)
{
	int i, dec, next = 0;

	if (*b == NULL)
		return (0);
	i = stlen(b) - 1;
	for (dec = 0; i >= 0; --i, ++next)
	{
		if ((b[i] == '0') || (b[i] == '1'))
			dec = dec + (b[i] - 48) * (1 << next);
		else
			return (0);
	}
	return (dec);
}
