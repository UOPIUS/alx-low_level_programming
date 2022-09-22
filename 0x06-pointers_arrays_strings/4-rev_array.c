#include "main.h"

/**
* reverse_array - reverses an array
* @a: array of numbers
* @n: number of array elements
*/

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
