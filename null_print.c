#include <stdlib.h>
#include "main.h"

/**
 * print_string - pulls null string using va_arg and output to stdout
 * @str: string
 *
 * Return: nullCount (int)
 */
int print_null(char *str)
{
	int nullCount = 6;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (nullCount);
	}

	return (0);
}
