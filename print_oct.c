#include "holberton.h"

/**
 * print_oct - print decimal to octal
 * @n: decimal number
 * @len: length
 * Return: count i
 */

int print_oct(unsigned int n, int len)
{
	/* int i = 0; */

	if (n != 0)
	{
		len++;
		print_oct(n / 8, len);
		_putchar((n % 8) + '0');
	}
	/* i--; */
	return (len);
}
