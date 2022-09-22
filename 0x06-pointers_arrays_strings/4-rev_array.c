#include "main.h"

/**
* reverse_array - reverses an array
* @a: array of numbers
* @n: number of array elements
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[n] = a[n - 1 - i];
		a[a - 1 - i] = temp;
	}
}
