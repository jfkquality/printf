#include "holberton.h"

/**
 * print_HEX - print decimal to hex
 * @n: decimal number
 * @len: length
 *
 * Return: counter i
 */
int print_HEX(unsigned int n, int len)
{
	/* int i = 0; */

	if (n != 0)
	{
		len++;
		print_HEX(n / 16, len);
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
	return (len);
}
