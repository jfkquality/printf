#include "holberton.h"

/**
 * print_int - print integer
 * @n: decimal number
 *
 * return: nothing
 */

int print_int(int n)
{
	int i = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n != 0)
	{
		print_int(n / 10);
		i += _putchar((n % 10) + '0');
	}
	return (i);
}
