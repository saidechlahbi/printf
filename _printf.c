#include "main.h"
/**
 * if_specifier - Function that compare the specifier to get.
 * the function of the specifier.
 * @spec: character argument.
 *
 * @s: character argument.
 * Return: i to get the first index from the spec[i].
 *
 */

int if_specifier(choose_tt spec[], char s)
{
	int l;

	for (l = 0; l < 12; l++)
	{
		if (s == spec[l].c)
			return (l);
	}
	return (-5);
}

/**
 * string - Function that print String.
 *
 *@arg: Variadic Arguments from user [String]
 *
 * Return: Length of string
 */

int string(va_list arg)
{
	char *s = va_arg(arg, char*);

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		write(1, s, ((int)strlen(s)));
	}
	return ((int)strlen(s));
}
/**
 * ch - Function that print characters.
 *@arg: Variadic Arguments from user [character]
 * Return: Length 1 that equal one character
 */
int ch(va_list arg)
{
	char s = va_arg(arg, int);

	write(1, &s, 1);
	return (1);
}

/**
 * decimal - Function that print Numbers.
 *@arg: Variadic Arguments from user [Int].
 * Return: Length of digits
 */

int decimal(va_list arg)
{
	int r = va_arg(arg, int);
	int len = 0;
	unsigned int d, i, count;

	if (r == 0)
	{
		write(1, "0", 1);
		return (++len);
	}
	if (r < 0)
	{
		write(1, "-", 1);
		len++;
		i = r * -1;
	}
	else
	{
		i = r;
	}
	d = i;
	count = 1;
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		char s = ((i / count) % 10) + '0';

		write(1, &s, 1);
		len++;
		count /= 10;
	}
	return (len);
}

/**
 * _printf - Function that print the format with handling the specifier.
 *@format: Fixed argument that take specifier.
 * Return: Length of format.
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int len = 0, f = 0;
	int spec_idx;

	choose_tt spec[] = {{'c', ch}, {'s', string}, {'d', decimal},
{'i', decimal}, {'r', reverse}, {'R', rot13}, {'b', binary},
{'X', hex_upper}, {'x', hex_lower}, {'o', octal}, {'u', un_int}, {'p', po}};
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[f] && format)
	{
		spec_idx = if_specifier(spec, format[f + 1]);
		if ((format[f] == '%'))
		{
			if (format[f + 1] == '\0')
				return (-1);
			else if (format[f + 1] == '%')
			{
				write(1, "%", 1);
				len++;
				f += 2;
			} else if (spec_idx >= 0)
			{
				len += spec[spec_idx].ptr(arg);
				f += 2;
			} else
			{
				len++;
				write(1, &(format[f]), 1);
				f++;
			}
		} else
		{
			len++;
			write(1, &(format[f]), 1);
			f++;
		}
	}
	return (len);
}

