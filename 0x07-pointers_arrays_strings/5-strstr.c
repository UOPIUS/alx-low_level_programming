#include "main.h"

/**
 * _strstr - locates a string inside another
 * @haystack: string to check
 * @needle: string to check for
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	char *temp_haystack;
	char *temp_needle;
	while (*haystack != '\0')
	{
		while (*temp_haystack == *temp_needle && *temp_needle != '\0')
		{
			temp_haystack++;
			temp_needle++;
		}
		if (*temp_needle == '\0')
			return (haystack);
		*haystack++;
	}
	return (0);
}
