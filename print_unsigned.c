#include "holberton.h"

/**
 * print_unsign - print integer
 * @n: decimal number
 * @len: length
 *
 * Return: i
 */

int print_unsign(unsigned int n, int len)
{
	/* int i = 0; */

	if (n != 0)
	{
		len++;
		print_unsign(n / 10, len);
		_putchar((n % 10) + '0');
	}

	return (len);
}
