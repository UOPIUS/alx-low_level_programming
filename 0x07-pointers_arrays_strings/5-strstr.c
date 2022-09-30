#include "main.h"

/**
 * _strstr - locates a string inside another
 * @haystack: string to check
 * @needle: string to check for
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	const char* p1;
	const char* p2;
	const char * p1_advance;

	if (!*needle) return (haystack);
	for (p2 = &needle[1]; *p2; ++p2)
		p1_advance++;
	for (p1 = haystack; *p1_advance;
	return NULL;
}
