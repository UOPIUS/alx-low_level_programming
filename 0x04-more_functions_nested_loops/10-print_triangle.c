#include "main.h"
/**
* main - print triangle
* @size: - size of triangle
* Return: integer
*/
void print_triangle(int size)
{
int i, j, n = size -1;

i = 0;
if(size > 0){
for (i = 1; i < 100; i++){
    for(j = 0; j < size; j++){
        if(j < n)
            _putchar(35);
        else
            _putchar(32);
    }
    n--;
    _putchar('\n');
}
}
else 
putchar('\n');
return (0);
}
