#include "holberton.h"

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
 */

int switch_help(char spec, va_list list)
{
	switch (spec)
	{
	case 'c':
		_putchar(va_arg(list, int));
	case 'i':
	case 'd':
		_putchar(va_arg(list, int));
	case 's':
		_puts(va_arg(list, char *));
	case '%':
		_putchar(va_arg(list, int));
	/* case 'b': */
	/* 	printbinary(); */
	/* case 'u': */
	/* 	unsigned decimal; */
	/* case 'o': */
	/* 	unsigned octal; */
	/* case 'x': */
	/* 	unsigned lower hex; */
	/* case 'X': */
	/* 	unsigned upper hex; */
	}
	return (0);
}
