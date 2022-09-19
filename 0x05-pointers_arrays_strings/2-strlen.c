#include "main.h"

/**
* _strlen - swaps the values of two integers.
* and updates the value it points to to 98
* @s: characters
* Return: integer
*/

int _strlen(char *s)
{
    int k = 0;
    for(; *s != '\0'; s++)
        k++;
    return (k);
}
