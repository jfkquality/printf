#include "holberton.h"

/**
 * print_unsigned - print integer
 * @n: decimal number
 *
 * return: nothing
 */

int print_unsigned(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_unsigned(n / 10);
		i += _putchar((n % 10) + '0');
	}
	return (i);
}
