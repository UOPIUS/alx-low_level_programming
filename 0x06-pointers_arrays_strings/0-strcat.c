#include "main.h"

/**
* *_strcat - Concats two strings
* @dest: characters
* @src: characters
* Return: string
*/

char *_strcat(char *dest, char *src)
{
	int kount = 0, dest_len = 0;
	char *temp_dest = dest, *temp_src = src;
	int init = 0;

	while (*src != '\0')
	{
		kount++;
		src++;
	}
	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	for (; init < kount; init++)
		temp_dest[dest_len + init] = temp_src[init];
	return (temp_dest);
}
