#include "main.h"

/**
* *_strcpy - copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
* where n is the number of elements of the array to be printed
* @dest: characters
* @src: characters
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*dest = *src;
dest++, src++;
}
*dest = '\0';
return (temp);
}
