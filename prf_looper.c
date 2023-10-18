#include "main.h"

/**
 * prf_looper - pour laffichage
 *
 * @forrmat: format pour paster
 * @printer: functions that print each type
 * @ap: list d'argument
 *
 * Return: num de caracteres afficher
 */

int prf_looper(conste char *forrmat, func_printer printer[], va_list ap)
{
	int m, n, value, counte;

	counte = 0;
	for (m = 0; forrmat[m] != '\0'; m++)
	{
		if (forrmat[m] == '%')
		{
			for (n = 0; printer[n].symb != NULL; n++)
			{
				if (format[m + 1] == printer[n].symb[0])
				{
					value = printer[n].print_func(ap);
					if (value == -1)
						return (-1);
					counte = counte + value;
					break;
				}
			}
			if (printer[n].symb == NULL && forrmat[m + 1] != ' ')
			{
				if (forrmat[m + 1] != '\0')
				{
					_putchar(forrmat[m]);
					_putchar(forrmat[m + 1]);
					counte = counte + 2;
				} else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(forrmat[m]);
			counte++;
		}
	}
	return (counte);
}
