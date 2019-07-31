#include "holberton.h"

/**
 * print_addr - print memory address in hex, lower case.
 * @n: decimal number
 *
 * Return: count i
 */
unsigned long int print_addr(unsigned long int n)
{
	int i = 0;

	if (n != 0)
	{
		print_hex(n / 16);
		switch (n % 16)
		{
		case (10):
			i += _putchar('a');
			break;
		case (11):
			i += _putchar('b');
			break;
		case (12):
			i += _putchar('c');
			break;
		case (13):
			i += _putchar('d');
			break;
		case (14):
			i += _putchar('e');
			break;
		case (15):
			i += _putchar('f');
			break;
		default:
			i += _putchar((n % 16) + '0');
		}
	}
	return (i);
}
