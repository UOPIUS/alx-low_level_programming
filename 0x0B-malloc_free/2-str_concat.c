#include "main.h"

/**
 * *_str_concat - concats two strings together
 * the duplicate string
 * @s1: character string
 * @s2: character string
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, stringlen = 0;
	char *ptr;
	char *temp = str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for(i = 0; s1[i] || s2[i]; i++)
		stringlen++;
	ptr = (char *) malloc(stringlen * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < stringlen; i++)
		ptr[i] = temp[i];
	for (i = 0; s2[i]; i++)
		ptr[i] = s2[i];
	return (ptr);
}
