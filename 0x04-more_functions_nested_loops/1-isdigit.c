#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
	return (0);
}
