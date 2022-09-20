#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: characters
 */

void puts_half(char *str)
{
int i, half, temp, n = 0;

while (str[n] != '\0')
n++;
if (n > 0)
{
half = n / 2;
if (n % 2 != 0)
i = half;
else
i = half + 1;
for (; i < n; i++)
_putchar(str[i]);
}
_putchar('\n');
}
