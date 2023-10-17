#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - home made printf.
 * @format: array of things to be printed.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int countt;

	func_printer printers[] = {
		{"c", pr_char},
		{"s", pr_string},
		{"%", pr_percent},
		{"i", pr_int},
		{"d", pr_int},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	countt = prf_looper(format, printers, ap);

	va_end(ap);

	return (countt);
}

