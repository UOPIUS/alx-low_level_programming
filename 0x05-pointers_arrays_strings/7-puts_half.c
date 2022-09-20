#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: characters
 */

void puts_half(char *str)
{
int i, half, n = 0;

while (str[n] != '\0')
n++;
if (n > 0){
half = n / 2;
for (i = half; i <= n; i++)
_putchar(str[i]);
}
_putchar('\n');
}
