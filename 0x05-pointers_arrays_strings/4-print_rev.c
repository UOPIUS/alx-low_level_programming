#include "main.h"
#include <string.h>

/**
 * print_rev - that prints a string, in reverse, followed by a new line.
 * @s: characters
 * Return: integer
 */

void print_rev(char *s)
{
int i;

i = strlen(s);
while (i >= 0)
{
_putchar(s[i]);
i--;
}
}
