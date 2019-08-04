#include "holberton.h"
#include <stdio.h>

/**
 * print_bin - print decimal to binary
 * @n: decimal number
 *
 * Return: counter 1
 */

int print_bin(unsigned int n)/* , int len) */
{
	static int i = 0;

	if (n != 0)
	{
		i++;
		print_bin(n / 2);/* , len); */
		_putchar((n % 2) + '0');
	}
	/* printf("Len in print_bin %d\n", len); */
	/* i--; */
	return (i);
}
