#include "main.h"
#include <string.h>

/**
 * print_rev - that prints a string, in reverse, followed by a new line.
 * @s: characters
 * Return: integer
 */

void print_rev(char *s)
{
int n = 0;
while (s[n] != '\0')
n++;
for (int i = n; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
