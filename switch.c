#include "holberton.h"

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
 */

void *switch_help(char *spec, ...)
{
	va_list argpassed;

	va_start(argpassed, spec);
	switch (spec)
	{
	case 'c':
		_putchar(va_arg(argpassed, char));
	case 'i':
	case 'd':
		_puts(va_arg(argpassed, int));
	case 's':
		_puts(va_arg(argpassed, char *));
	case '%':
		_putchar(va_arg(argpassed, char));
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
	va_end(argpassed);
}
