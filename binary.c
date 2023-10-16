#include "main.h"
/**
* binary - Function that convert decimal to binary
*
* @arg: Variadic Arguments from user [Int]
* Return: length digits
*
*/

int binary(va_list arg)
{
char *s;
unsigned int f = va_arg(arg, unsigned int), len, i, m, temp;


len = 0;
if (f == 0)
{
write(1, "0", 1);
return (1);
}
i = 0;
m = f;
temp = f;
while (m)
{
len++;
m /= 2;
}
f = malloc(len + 1);
if (f == NULL)
return (0);
for (i = len - 1; temp != 0; i--)
{
s[i] = (temp % 2) + '0';
temp /= 2;
}
f[len] = '\0';
for (i = 0; i < len; i++)
write(1, &s[i], 1);
free(f);
return (len);
}
