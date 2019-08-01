#include "holberton.h"
#include <stdio.h>

/**
 * print_bin - print decimal to binary
 * @n: decimal number
 * @len: lenght
 *
 * Return: counter 1
 */

int print_bin(unsigned int n, int len)
{
	/* int i = 0; */

	if (n != 0)
	{
		len++;
		print_bin(n / 2, len);
		_putchar((n % 2) + '0');
	}
	/* printf("Len in print_bin %d\n", len); */
	/* i--; */
	return (len);
}
