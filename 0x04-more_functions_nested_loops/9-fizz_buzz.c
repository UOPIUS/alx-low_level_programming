#include <stdio.h>
/**
* main - print numbers
* Return: integer
*/
int main(void)
{
int i;

for (i = 0; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}
