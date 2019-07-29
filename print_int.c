#include "holberton.h"

/**
 *
 *
 *
 */

void print_int(int n)
{
	if (n != 0)
	{
		print_int(n / 10);
		_putchar((n % 10) + '0');
	}
}
