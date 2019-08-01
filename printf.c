#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - print
 * @format: print string with specifiers
 *
 * Return: exit code?
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int len = 0;
	int arg_len = 0;
	char specifier;

	va_start(list, format);
	while (format && format[i])  /* < _strlen(format)) */
	{
		if (format[i] == '%')
		{
			specifier = get_spec(format[i + 1]);
			 /* Send specifier, and arg to print_arg */
			if (specifier != 0)
			{
				len += switch_help(specifier, list);
			}
			if (arg_len < 0)
				return (-1);
			i++;
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
		/* len++; */
	}
	if (!format)
		return (-1);

	va_end(list);
	/* printf("this is len %d and this is arg_length %d\n\n", len, arg_len); */

	return (len); /* + arg_len); */
}
