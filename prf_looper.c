#include "main.h"

/**
 * prf_looper - Looper that iterates through a format.
 * @format: The format to be printed.
 * @printers: Functions that print each type.
 * @ap: List of arguments.
 *
 * Return: The number of characters to be printed.
 */

int prf_looper(const char *format, func_printer printers[], va_list ap)
{
	int m, n, val, count;

	count = 0;
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] == '%')
		{
			for (n = 0; printers[n].symb != NULL; n++)
			{
				if (format[m + 1] == printers[n].symb[0])
				{
					val = printers[n].print_func(ap);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (printers[n].symb == NULL && format[m + 1] != ' ')
			{
				if (format[m + 1] != '\0')
				{
					_putchar(format[m]);
					_putchar(format[m + 1]);
					count += 2;
				} else
					return (-1);
			}
			m++;
		}
		else
		{
			_putchar(format[m]);
			count++;
		}
	}
	return (count);
}

