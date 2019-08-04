#include "holberton.h"

/**
 * print_int - print integer
 * @n: decimal number
 *
 *
 * Return: counter
 */

int print_int(int n)
{
	static int i;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		/* i++; */
	}
	if (n != 0)
	{
		i++;
		print_int(n / 10);
		_putchar((n % 10) + '0');
	}

	return (i);
}
