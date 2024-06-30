#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point checks if a charcter is uppercase
 * @c: is the character to be cheked for
 * Return: 1 if uppercase and 0 if not
 * */
int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
