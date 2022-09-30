#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argc param
 * @argv: array of parameters
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
