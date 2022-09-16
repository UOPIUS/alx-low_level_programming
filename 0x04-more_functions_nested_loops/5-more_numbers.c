#include "main.h"
/**
* more_numbers -prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
int i, j;
for (i = 1; i < 10; i++)
{
j = 0;
while (j < 10)
{
_putchar(j + '0');
j++;
}
_putchar('\n');
}
_putchar('\n');
}
