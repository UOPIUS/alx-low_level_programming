#include "main.h"

/**
 * _strstr - locates a string inside another
 * @haystack: string to check
 * @needle: string to check for
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}
