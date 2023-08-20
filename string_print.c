#include <stdlib.h>
#include "main.h"

/**
 * print_string - pulls string using va_arg and output to stdout
 * @str: string
 *
 * Return: Void
 */
void print_string(char *str)
{
	int j;

	if (str != NULL)
	{
		for (j = 0; j < _strlen(str); j++)
			_putchar(str[j]);
	}
}
