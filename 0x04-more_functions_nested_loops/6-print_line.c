#include "main.h"
/**
* print_line - prints a line according to the number given
* @len: length of expected line
*/
void print_line(int len)
{
if (len > 0)
{
int i;
for (i = len; i > 0; i--)
{
_putchar('_');
}
}
_putchar('\n');
}
