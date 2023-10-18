#include "main.h"

/**
 * pr_num : Print the number submitted for this fonction
 * @x: The number we will print
 * Return: The number of arguments print
 */
int pr_num(int x)
{
	int lin;
	int div;
	unsigned int num;

	lin = 0;
	div = 1;
	if (x <= 0)
	{
		num = x;
	}
	 if (x < 0)
        {
                _putchar('-');
                num =(-1) * x;
                lin++;
        }
	while (num / div > 9)
	{
		div = div * 10;
	}
	while (div != 0)
	{
		_putchar((num / div) + '0');
		num = num % div;
		div = div /  10;
		lin++;
	}
	return (lin);
}

/**
 * pr_unsigned_num - Printing a unsigned number
 * @x: unsigned integer to be printed
 * Return: Quantity of printed numbers
 */
int pr_unsigned_num(unsigned int x)
{
	int div;
	int lin;
	unsigned int num;

	div = 1;
	lin = 0;
	num = n;


	while (num / div >= 10)
		div = div * 10;
	while (div != 0)
	{
		lin = lin + _putchar('0' + num / div);
		num %= div;
		div = div / 10;
	}
	return (lin);
}
