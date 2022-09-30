#include <stdio.h>

/**
 * main - prints multiply 2 numbers
 * @argc: argc param
 * @argv: array of params
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int product, num1, num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
