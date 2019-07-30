#include "holberton.h"

/**
 * print_hex - print decimal to hex, lower case.
 * @n: decimal number
 *
 * return: nothing
 */
void print_hex(unsigned int n)
{
	if (n != 0)
	{
		print_hex(n / 16);
		/* if (n % 16 > 10) */
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
}
