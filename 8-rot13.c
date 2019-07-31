#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * rot13 - convert string to rot13 encoding
 * @str: passed array as pointer
 * Return: string
 */
int rot13(char *str)
{
	int printed = 0;
	int len;
	char *s1;
	/* char *s2; */
	char *str2 = str;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *c1 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *d = c;
	char *d1 = c1;

	for (len = 0; *str2; len++, str2++)
		;
	len++;
	s1 = malloc(len * sizeof(char));
	s1 = str;

	while (*s1 != '\0')
	{
		d = c;
		d1 = c1;
		while (*d != '\0')
		{
			if (*s1 == *d)
			{
				/* *s1 = *d1; */
				printed += _putchar(*d1);
				break;
			}
			d++;
			d1++;
		}
		if (!(*s1 > 'a' && *s1 < 'z') && !(*s1 > 'A' && *s1 < 'Z'))
			printed += _putchar(*s1);
		s1++;
	}
	printed--;
	return (printed);
}
