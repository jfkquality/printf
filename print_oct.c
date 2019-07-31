#include "holberton.h"

/**
 * print_oct - print decimal to octal
 * @n: decimal number
 *
 * Return: count i
 */

int print_oct(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_oct(n / 8);
		i = _putchar((n % 8) + '0');
	}
	i--;
	return (i);
}
