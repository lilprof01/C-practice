#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry point prints the numbers 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	{
		_putchar((c / 10) + '0');
	}
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}

}
