#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
* where n is the number of elements of the array to be printed
* @a: int
* @n: int - size of array to be printed
*/

void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i <= n - 2)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
}
