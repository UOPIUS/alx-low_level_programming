#include "main.h"

/**
* swap_int - swaps the values of two integers.
* and updates the value it points to to 98
* @a: int
* @b: int
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
