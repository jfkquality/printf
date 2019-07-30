#include "holberton.h"

/**
 * print_bin - print decimal to binary
 * @n: decimal number
 *
 * return: nothing
 */

void print_bin(int n)
{
	if (n != 0)
	{
		print_bin(n / 2);
		_putchar((n % 2) + '0');
	}
}
