#include "holberton.h"

/**
 * print_HEX - print decimal to hex
 * @n: decimal number
 *
 * Return: counter i
 */
int print_HEX(unsigned int n)
{
	int i = 0;

	if (n != 0)
	{
		print_HEX(n / 16);
		/* if (n % 16 > 10) */
		switch (n % 16)
		{
		case (10):
			i += _putchar('A');
			break;
		case (11):
			i += _putchar('B');
			break;
		case (12):
			i += _putchar('C');
			break;
		case (13):
			i += _putchar('D');
			break;
		case (14):
			i += _putchar('E');
			break;
		case (15):
			i += _putchar('F');
			break;
		default:
			i += _putchar((n % 16) + '0');
		}
	}
	return (i);
}
