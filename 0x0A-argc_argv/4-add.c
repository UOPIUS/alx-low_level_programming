#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: argc param
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, n, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		n = atoi(argv[k]);
		result += n;
	}
	printf("%d\n", sum);
	return (0);
}
