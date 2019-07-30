#include "holberton.h"

/**
 * print_unsigned - print integer
 * @n: decimal number
 *
 * return: nothing
 */

void print_unsigned(unsigned int n)
{
	if (n != 0)
	{
		print_int(n / 10);
		_putchar((n % 10) + '0');
	}
}
