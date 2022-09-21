#include "main.h"
/**
 * print_square - print a squre
 * @size: integer
 */
void print_square(int size)
{
int i = 0;
int j;

if (size > 0)
{
for (; i < size; i++)
{
for (j = 0; j < size; j++)
putchar(35);
putchar('\n');
}
}
else
_putchar('\n');
}
