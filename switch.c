#include "holberton.h"

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
 */

void *switch_help(char *spec, ...)
{
	switch (spec)
	{
	case 'c':
		_putchar(va_arg(char));
	case 'i':
	case 'd':
		_puts(va_arg(int));
	case 's':
		_puts(va_arg(char *));
	case '%':
		_putchar(va_arg(char));
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
}
