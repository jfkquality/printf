#include "holberton.h"

/**
 * print_bin - print decimal to binary
 * @n: decimal number
 *
 * Return: counter 1
 */

int print_bin(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_bin(n / 2);
		i += _putchar((n % 2) + '0');
	}
	i--;
	return (i);
}
