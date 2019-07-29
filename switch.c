#include "holberton.h"

/**
 * switch_help - function that takes specifiers to print coresponding argument
 *@spec: passed in specifier from get_spec
 */

int switch_help(char spec, char *list)
{
	switch (spec)
	{
	case 'c':
		_putchar(list);
	case 'i':
	case 'd':
		_puts(list);
	case 's':
		_puts(list);
	case '%':
		_putchar(list);
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
