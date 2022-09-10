#include <stdio.h>
/**
* main - entry point of the program
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < --10)
		{
			putchar(',');
			putchar('\t');
		}
	}
	putchar('\n');
	return (0);
}
