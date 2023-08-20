#include <stdlib.h>
#include "main.h"

/**
 * print_string - pulls null string using va_arg and output to stdout
 * @str: string
 *
 * Return: nullCount (int)
 */
int print_null()
{
	int nullCount = 6;

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');

	return (nullCount);
}
