#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	const char *p = format, *format_loop = format;
	char *str;
	int count = 0, i = 0, j;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (EXIT_SUCCESS);
	while (format_loop[i] != '\0')
	{
		if (format_loop[i] == '%')
		{
			switch (p[i + 1])
			{
				case '\0':
					return (EXIT_SUCCESS);
				case 'c':
					_putchar(va_arg(ap, int));
					count += 1;
					i++;
					break;
				case 's':
					str = va_arg(ap, char *);
					for (j = 0; j < _strlen(str); j++)
						_putchar(str[j]);
					count += _strlen(str);
					i++;
					break;
				default:
					_putchar(p[i + 1]);
					count += 1;
					i++;
			}
		}
		else
		{
			_putchar(format_loop[i]);
			count += 1;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
