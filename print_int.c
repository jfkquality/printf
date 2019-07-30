#include "holberton.h"

/**
 * print_int - print integer
 * @n: decimal number
 *
 * return: nothing
 */

void print_int(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n != 0)
	{
		print_int(n / 10);
		_putchar((n % 10) + '0');
	}
}