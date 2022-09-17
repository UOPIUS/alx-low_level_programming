#include <stdio.h>
/**
 * main - print numbers
 * Return: 0;
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i < 3)
printf("%d", i);
else if (i % 3 == 0 && i % 5 > 0)
printf("%s", "Fizz");
else if (i % 5 == 0 && i % 3 > 0)
printf("%s", "Buzz");
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else
printf("%d", i);
putchar(' ');
}
putchar('\n');
return (0);
}
