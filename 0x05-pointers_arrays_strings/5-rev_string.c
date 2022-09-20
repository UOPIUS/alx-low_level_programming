#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: characters
 */

void rev_string(char *s)
{
char str;
int i, n = 0;
int len;
char temp;

while (s[n] != '\0')
n++;
for (i = 0; i < n / 2; i++)
{
temp = s[i];
s[i] = s[n - 1 - i];
s[n - 1 - i] = temp;
}
}
