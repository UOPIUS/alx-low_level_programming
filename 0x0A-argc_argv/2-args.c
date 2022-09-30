#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argc param
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
