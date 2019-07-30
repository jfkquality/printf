#include <stdio.h>
#include "holberton.h"

/**
 * get_spec - get print specifier
 * @letter: character to test
 *
 * Return: specifier
 */

char get_spec(char letter)
{
	switch (letter)
	{
	case 'c':
	case 's':
	case 'd':
	case 'i':
	case '%':
	case 'b':
	case 'f':
	case 'g':
	case 'h':
	case 'l':
	case 'o':
	case 'p':
	case 'r':
	case 'R':
	case 'u':
	case 'x':
	case 'X':
	case '0':
		return (letter);
	default:
		return (0);
	}
}
