#include "main.h"
/**
* print_triangle - print triangle
* @size: size of triangle
*/
void print_triangle(int size)
{
int i = 0, j, n = size - 1;

if (size > 0)
{
for (; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < n)
_putchar(' ');
else
_putchar('#');
}
n--;
_putchar('\n');
}
}
else
putchar('\n');
}
