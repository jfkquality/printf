#include "holberton.h"
#include <stdio.h>

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
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
		print_int(va_arg(list, int));
		break;
	case 's':
		_puts(va_arg(list, char *));
		break;
	case '%':
		_putchar('%');
		break;
	case 'b':
		print_bin(va_arg(list, int));
		break;
	case 'u':
		print_unsigned(va_arg(list, int));
		break;
	case 'o':
		print_oct(va_arg(list, int));
		break;
	/* case 'p': */
	/* 	print_addr(va_arg(list, void *)); */
		/* printf("%p\n", va_arg(list, void *)); */
		/* break; */
	case 'r':
		print_rev(va_arg(list, char *));
		break;
	case 'R':
		p = rot13(va_arg(list, int));
		/* _puts(p); */
		/* free(p); */
		break;
	case 'x':
		print_hex(va_arg(list, int));
		break;
	case 'X':
		print_HEX(va_arg(list, int));
		break;
	}
	return (0);
}
