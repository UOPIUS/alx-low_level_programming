#include "main.h"

/**
 * *create_array - creates an array of char,
 * initializes with a specific char
 * @size: size of char
 * @c: characters
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
