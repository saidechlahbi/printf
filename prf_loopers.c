#include "main.h"

/**
 * prf_looper - A looper that iterates through a format.
 *
 * @format: The format to be printed.
 * @printers: Functions that print each type.
 * @ap: List of arguments.
 *
 * Return: The number of characters to be printed.
 */

int prf_looper(const char *format, func_printer printers[], va_list ap)
{
	int i, j, val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; printers[j].symb != NULL; j++)
			{
				if (format[i + 1] == printers[j].symb[0])
				{
					val = printers[j].print_func(ap);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (printers[j].symb == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				} else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
