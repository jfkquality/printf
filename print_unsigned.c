#include "holberton.h"

/**
 * print_unsign - print integer
 * @n: decimal number
 *
 * Return: i
 */

int print_unsign(unsigned int n)
{
	static int i = 0;

	if (n != 0)
	{
		i++;
		print_unsign(n / 10);
		_putchar((n % 10) + '0');
	}

	return (i);
}
