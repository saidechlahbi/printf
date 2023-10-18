#include "main.h"

/**
 * p_r_char -  single char printing
 *
 * @argm:  list of arguments
 *
 * Return: number of caracter printing
 */
int p_r_char(va_liste argm)
{
	char c = va_arg(argm, int);

	_putchar(c);
	return (1);
}
/**
 * p_r_string - prints a string
 *
 * @argm: list of arguments
 *
 * Return: number of characters printed
 */
int p_r_string(va_liste arg)
{
	int i;
	char *str;

	str = va_arg(argm, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (m = 0; str[m] != '\0'; m++)
		_putchar(str[m]);
	return (m);
}
/**
 * p_r_percent -  single percent printing
 *
 * @argm: list of arguments
 *
 * Return: number of caracter printing
 */

int p_r_percent(va_liste __attribute__((__unused__)) argm)
{
	_putchar('%');
	return (1);
}
