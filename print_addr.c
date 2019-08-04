#include "holberton.h"

/**
 * print_addr - print memory address in hex, lower case.
 * @n: decimal number
 *
 * Return: count i
 */
int print_addr(unsigned long int n)
{
	static int i;

	if (n != 0)
	{
		i++;
		print_addr(n / 16);
		switch (n % 16)
		{
		case (10):
			_putchar('a');
			break;
		case (11):
			_putchar('b');
			break;
		case (12):
			_putchar('c');
			break;
		case (13):
			_putchar('d');
			break;
		case (14):
			_putchar('e');
			break;
		case (15):
			_putchar('f');
			break;
		default:
			_putchar((n % 16) + '0');
		}
	}
	return (i);
}
