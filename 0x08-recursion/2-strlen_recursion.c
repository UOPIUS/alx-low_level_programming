#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	s++;
	return (i + _strlen_recursion(s));
}
