#include "main.h"

/**
* *_strcmp - compares 2 strings
* @s1: characters
* @s2: characters
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int ascii_difference;

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++, s2++;
	}
	ascii_difference = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (ascii_difference);
}
