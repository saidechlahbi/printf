#include "main.h"


/**
 * pr_int - Print an integer
 * @args: List of arguments
 * Return: The number of characters printed
 */


int pr_int(va_list args)
{
	int count;
	int i;

	i = va_arg(args, int);

	count = pr_num(i);

	return (count);
}

