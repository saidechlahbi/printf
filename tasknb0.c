#include "main.h"

/**
 * pr_char - Prints a single character.
 *
 * @arg: Argument list.
 *
 * Return: The number of characters printed.
 */

int pr_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
 * pr_string - Prints a string.
 *
 * @arg: Argument list.
 *
 * Return: The number of characters printed.
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
 * pr_percent - Prints a single percent character.
 *
 * @arg: Argument list.
 *
 * Return: The number of characters printed.
*/

int pr_percent(va_list _attribute((unused_)) arg)
{
	_putchar('%');
	return (1);
}
