#include "main.h"

/**
* _strlen - swaps the values of two integers.
* and updates the value it points to to 98
* @s: characters
* Return: integer
*/

int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
n++;
return n;
}
