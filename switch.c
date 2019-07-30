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
	int p;

	switch (spec)
	{
	case 'c':
		_putchar(va_arg(list, int));
		break;
	case 'i':
	case 'd':
		p = print_int(va_arg(list, int));
		return (p);
		/* break; */
	case 's':
		p = _puts(va_arg(list, char *));
		return (p);
	case '%':
		_putchar('%');
		break;
	case 'b':
		print_bin(va_arg(list, int));
		break;
	case 'u':
		print_unsigned(va_arg(list, unsigned int));
		break;
	case 'o':
		print_oct(va_arg(list, int));
		break;
	case 'r':
		print_rev(va_arg(list, char *));
		break;
	/* case 'R': */
	/* p = rot13(va_arg(list, int)); */
	/* break; */
	case 'x':
		print_hex(va_arg(list, int));
		break;
	case 'X':
		print_HEX(va_arg(list, int));
		break;
	}
	return (0);
}
