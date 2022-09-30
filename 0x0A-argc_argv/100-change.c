#include <stdio.h>
#include <stdlib.h>

/**
 * main - do change for cents
 * @argc: argc param
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, i, j, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && cents >= 0; j++)
	{
		while (cents >= coins[j])
		{
			cents -= coins[j];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
