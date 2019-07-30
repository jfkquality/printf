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
	/**
	* "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13)
	* is a simple letter substitution cipher.\n"
	*/

	int printed = 0;
	int len;
	char *s1;
	/* char *s2; */
	char *str2 = str;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *c1 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *d = c;
	char *d1 = c1;

	for(len = 0; *str2; len++, str2++)
		;

	len++;

	s1 = malloc(len * sizeof(char));
	/* s2 = s1; */

	while (*s1 != '\0')
	{
		d = c;
		d1 = c1;
		while (*d != '\0')
		{
			if (*s1 == *d)
			{
				*s1 = *d1;
				printed += _putchar(*s1);
				break;
			}
			d++;
			d1++;
		}
		printed += _putchar(*s1);
		s1++;
	}
	/* _puts(s2); */
	/* while (s2 < str2) */
	/* { */
	/* 	_putchar(*s2); */
	/* 	s2++; */
	/* } */
	return (printed);

}
