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
	strncpy(dest, src, n);
	return (dest);
}
