#include "main.h"

/**
 * argstostr - concats all the arguments of a program
 * @ac: number of arguments
 * @av: argument array
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, kounter = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			kounter = kounter + 1;
			j++;
		}
		kounter = kounter + 1;
	}
	ptr = (char *) malloc(sizeof(char) * kounter);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[n] = av[i][j];
			n++;
			j++;
		}
		ptr[n++] = '\n';
	}
	return (ptr);
}
