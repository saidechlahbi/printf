#include "main.h"

/**
 * pr_char - Print a single character
 *
 * @arg: Arguments list
 *
 * Return: The number of characters printed
 */

int pr_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
 * pr_string - Print a string
 *
 * @arg: Arguments list
 *
 * Return: The number of characters printed
 */

int pr_string(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
/**
 * pr_percent - Print a single percent character
 *
 * @arg: Arguments list
 *
 * Return: The number of characters printed
 */

int pr_percent(va_list __attribute__((__unused__)) arg)
{
	_putchar('%');
	return (1);
}

