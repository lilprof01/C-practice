#include <stdio.h>
#include "main.h"

/**
 * _isdigit - entry point checks for a digit from 0 through 9
 * @c: is the character to be checked for
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
