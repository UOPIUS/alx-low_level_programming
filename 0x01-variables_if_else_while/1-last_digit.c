#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point of the program
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	long tmp = n % 10;

	if (tmp > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
	else if (tmp == 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	return (0);
}