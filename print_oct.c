#include "holberton.h"

/**
 * print_oct - print decimal to octal
 * @n: decimal number
 *
 * Return: count i
 */

int print_oct(unsigned int n)
{
	static int;

	if (n != 0)
	{
		i++;
		print_oct(n / 8);
		_putchar((n % 8) + '0');
	}
	/* i--; */
	return (i);
}
