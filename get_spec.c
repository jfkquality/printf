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
		return (letter);
	case 's':
		return (letter);
	case 'd':
		return (letter);
	case 'i':
		return (letter);
	case '%':
		return (letter);
	/* case 'b': */
	/* 	return (letter); */
	/* case 'f': */
	/* 	return (letter); */
	/* case 'g': */
	/* 	return (letter); */
	/* case 'h': */
	/* 	return (letter); */
	/* case 'l': */
	/* 	return (letter); */
	/* case 'o': */
	/* 	return (letter); */
	/* case 'p': */
	/* 	return (letter); */
	/* case 'r': */
	/* 	return (letter); */
	/* case 'R': */
	/* 	return (letter); */
	/* case 'u': */
	/* 	return (letter); */
	/* case 'x': */
	/* 	return (letter); */
	/* case '0': */
	/* 	return (letter); */
	default:
		return (0);
	}
}
