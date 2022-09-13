#include "main.h"
/**
* print_alphabet - prints
* Return - 0
*/
void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
