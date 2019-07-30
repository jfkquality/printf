#include "holberton.h"

/**
 * _puts - tested function
 *@str: string
 * Return: string
 */
int _puts(char *str)
{
	int length;
	int i = 0;

	for (length = 0 ; str[length] != '\0' ; ++length)
	{
		i += _putchar(str[length]);
	}
	i--; /* get correct count */
	return (i);
}
