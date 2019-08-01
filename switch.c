#include "holberton.h"
#include <stdio.h>

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
 *@list: arguments passed
 * Return: int of string length
 */
int switch_help(char spec, va_list list)
{
	int p = 0;
	int c = 0;

	switch (spec)
	{
	case 'c':
		c += _putchar(va_arg(list, int));
		break;
	case 'i': case 'd':
		c = print_int(va_arg(list, int), p);
		break;
	case 's':
		c += _puts(va_arg(list, char *));
		break;
	case '%':
		c += _putchar('%');
		break;
	case 'b':
		c += print_bin(va_arg(list, int), p);
		break;
	case 'u':
		c += print_unsign(va_arg(list, unsigned int), p);
		break;
	case 'o':
		c += print_oct(va_arg(list, unsigned int), p);
		break;
	case 'r':
		c += print_rev(va_arg(list, char *));
		break;
	case 'R':
		c += rot13(va_arg(list, char *));
		break;
	case 'p':
		c += _puts("0x");
		c += print_addr(va_arg(list, unsigned long int), p);
		break;
	case 'x':
		c += print_hex(va_arg(list, unsigned int), p);
		break;
	case 'X':
		c += print_HEX(va_arg(list, unsigned int), p);
		break;
	}
	return (c);
}
