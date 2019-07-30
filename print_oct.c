#include "holberton.h"

/**
 * print_oct - print decimal to octal
 * @n: decimal number
 *
 * return: nothing
 */

void print_oct(unsigned int n)
{
	if (n != 0)
	{
		print_oct(n / 8);
		_putchar((n % 8) + '0');
	}
}
