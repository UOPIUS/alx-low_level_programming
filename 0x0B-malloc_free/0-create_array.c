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
	if (size <= 0)
		return (NULL);
	int i;
	char *ptr = NULL;

	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(ptr + i) = 'h';
	return (ptr);
}
