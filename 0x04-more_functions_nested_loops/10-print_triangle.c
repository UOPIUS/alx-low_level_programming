#include "main.h"
/**
* print_triangle - print triangle
* @size: - size of triangle
*/
void print_triangle(int size)
{
int i = 0, j, n = size - 1;

if (size > 0)
{
for (i = 1; i < 100; i++)
{
for (j = 0; j < size; j++)
{
if (j < n)
_putchar(35);
else
_putchar(32);
}
n--;
_putchar('\n');
}
}
else
putchar('\n');
return (0);
}
