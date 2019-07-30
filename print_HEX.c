#include "holberton.h"

/**
 * print_HEX - print decimal to hex
 * @n: decimal number
 *
 * return: nothing
 */
void print_HEX(unsigned int n)
{
	if (n != 0)
	{
		print_HEX(n / 16);
		/* if (n % 16 > 10) */
		switch (n % 16)
		{
		case (10):
			_putchar('A');
			break;
		case (11):
			_putchar('B');
			break;
		case (12):
			_putchar('C');
			break;
		case (13):
			_putchar('D');
			break;
		case (14):
			_putchar('E');
			break;
		case (15):
			_putchar('F');
			break;
		default:
			_putchar((n % 16) + '0');
		}
	}
}
