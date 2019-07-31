#include "holberton.h"

/**
 * print_hex - print decimal to hex, lower case.
 * @n: decimal number
 *
 * Return: count i
 */
int print_hex(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_hex(n / 16);
		/* if (n % 16 > 10) */
		switch (n % 16)
		{
		case (10):
			_putchar('a');
			i++;
			break;
		case (11):
			_putchar('b');
			i++;
			break;
		case (12):
			_putchar('c');
			i++;
			break;
		case (13):
			_putchar('d');
			i++;
			break;
		case (14):
			_putchar('e');
			i++;
			break;
		case (15):
			_putchar('f');
			i++;
			break;
		default:
			_putchar((n % 16) + '0');
			i++;
		}
	}
	return (i);
}
