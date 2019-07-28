#include "holberton.h"

/**
 *
 *
 *
 */

char *switch_help(char *spec, ...)
{
	va_list argpassed;

	switch (fmt)
	{
	case 'c':
		_putchar(va_arg(argpassed, char));
	case 'i':
	case 'd':
		putint(va_arg(argpassed, int));
	case 's':
		puts(va_arg(argpassed, cahr *));
	case '%':
		_putchar('%');
	case 'b':
		printbinary();
	case 'u':
		unsigned decimal;
	case 'o':
		unsigned octal;
	case 'x':
		unsigned lower hex;
	case 'X':
		unsigned upper hex;
	}
}
