#include "main.h"
/**
 * octal - Function that convert decimal to octal
 * @arg: Variadic Arguments from user [Int]
 *
 * Return: length digits
 */

int octal(va_list arg)
{
	unsigned int f = va_arg(arg, unsigned int), t, m, len, temp;
	char *s;

	len = 0;
	if (f == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	t = 0;
	m = f;
	temp = f;
	while (m)
	{
		len++;
		m /= 8;
	}
	s = malloc(len + 1);
	if (s == NULL)
		return (0);
	for (t = len - 1; temp != 0; t--)
	{
		if ((temp % 8) < 10)
			s[t] = (temp % 8) + '0';
		temp /= 8;
	}
	s[len] = '\0';
	for (t = 0; t < len; t++)
		write(1, &s[t], 1);
	free(s);
	return (len);
}

