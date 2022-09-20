#include "main.h"
#include <string.h>

/**
 * print_rev - that prints a string, in reverse, followed by a new line.
 * @s: characters
 * Return: integer
 */

void print_rev(char *s)
{
int n, i;
n = strlen(s);
while (i >= n)
{
_putchar(s[i]);
i--;
}
}
