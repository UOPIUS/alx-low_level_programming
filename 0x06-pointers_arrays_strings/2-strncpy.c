#include "main.h"

/**
* *_strncpy - Copy a string into another string
* @dest: characters
* @src: characters
* @n: limit of concatenation
* Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *temp = dest;

	while (*src != '\0' && i < n)
	{
		i++;
		*dest = *src;
		dest++, src++;
	}
	return (temp);
}
