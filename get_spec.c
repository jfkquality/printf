#include <stdio.h>
#include "holberton.h"

char get_spec(str)
{
	int i;
	while (str[i])
	{
		switch
		{
		case 'e':
			return (str[i]);
			break;
		case 's':
			return (str[i]);
			break;
		case '%':
			return (str[i]);
			break;
		case 'i':
			return (str[i]);
			break;
		case 'd':
			return (str[i]);
			break;
		default:
			return (0);
		}
		i++;
	}
	return (str[i]);
}
