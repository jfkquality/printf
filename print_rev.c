#include "holberton.h"

/**
 * print_rev - tested function
 *@s: input string
 * Return: maybe
 */
int print_rev(char *s)
{

	char r[1000];
	int begin = 0;
	int end = 0;
	int length = 0;
	int i = 0;

	if (s)
	{
		for (length = 0 ; s[length] != '\0' ; ++length)
		{
		}
		end = length - 1;
		for (begin = 0 ; begin < length ; ++begin)
		{
			r[begin] = s[end];
			end--;
			i += _putchar(r[begin]);
		}
	}
	else
		_putchar('0');
	/* i--; */
	return (i);
}
