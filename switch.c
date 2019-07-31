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

	switch (spec)
	{
	case 'c':
		p = _putchar(va_arg(list, int));
		return (p);
	case 'i':
	case 'd':
		p = print_int(va_arg(list, int));
		return (p);
	case 's':
		p = _puts(va_arg(list, char *));
		return (p);
	case '%':
		p = _putchar('%');
		return (p);
	case 'b':
		p = print_bin(va_arg(list, int));
		return (p);
	case 'u':
		p = print_unsign(va_arg(list, unsigned int));
		return (p);
	case 'o':
		p = print_oct(va_arg(list, unsigned int));
		return (p);
	case 'r':
		p = print_rev(va_arg(list, char *));
		return (p);
	case 'R':
		p = rot13(va_arg(list, char *));
		return (p);
	case 'x':
		p = print_hex(va_arg(list, unsigned int));
		return (p);
	case 'X':
		p = print_HEX(va_arg(list, unsigned int));
		return (p);
	}
	return (0);
}
