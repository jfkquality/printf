#include "holberton.h"

/**
 * print_unsign - print integer
 * @n: decimal number
 *
 * Return: i
 */

int print_unsign(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_unsign(n / 10);
		i += _putchar((n % 10) + '0');
	}
	i--;
	return (i);
}
