#include "main.h"

/**
 * un_int - Function that takes the argument as unsigned int
 * @arg: Variadic Arguments from user [unsigned Int]
 *
 * Return: length digits
 */

int un_int(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), m, r, len;
	char *b;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (++len);
	}
	m = n;
	while (n)
	{
		len++;
		n /= 10;
	}
	b = malloc(len + 1);
	r = len - 1;
	while (m)
	{
		b[i] = (m % 10) + '0';
		m /= 10;
		r--;
	}
	for (r = 0; r < len; r++)
		write(1, &s[r], 1);
	b[len] = '\0';

	free(b);
	return (len);
}

