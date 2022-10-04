#include "main.h"

/**
 * *_strdup - returns a pointer to a new memory allocated to holding
 * the duplicate string
 * @str: character string
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	unsigned int i, stringlen = 0;
	char *ptr;
	char *temp = str;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		stringlen++;
		str++;
	}

	ptr = (char *) malloc(stringlen * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < stringlen; i++)
		ptr[i] = temp[i];
	return (ptr);
}
