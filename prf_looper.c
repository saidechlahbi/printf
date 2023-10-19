#include "main.h"

/**
 * prf_looper - Loop through the format and print its content
 *
 * @format: The format to be printed
 * @printers: Functions that handle the printing of each data type
 * @ap: A list of arguments
 *
 * Return: The number of characters printed
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
