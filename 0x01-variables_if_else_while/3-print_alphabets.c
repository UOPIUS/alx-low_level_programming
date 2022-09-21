#include <stdio.h>
/**
* main - entry point of the program
*
* Return: 0
*/
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
