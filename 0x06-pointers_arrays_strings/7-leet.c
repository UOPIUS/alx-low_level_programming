#include "main.h"

/**
* leet - Encode a string
* @string: characters
* Return: string
*/

char *leet(char *string)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1};

	while (string[a])
	{
		b = 0;
		while (b < l)
		{
			if (string[a] == tr[b] || string[a] - 32 == tr[b])
				string[a] = trw[b];
			b++;
		}
		a++;
	}
	return (string);
}
