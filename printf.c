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
	int count = 0, i = 0, len, j;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (0);
	for ( ; format_loop[i] != '\0'; )
	{
		if (format_loop[i] == '%')
		{
			if (p[i + 1] == '\0')
				return (0);
			if (p[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				count += 1;
				i++;
			}
			if (p[i + 1] == 's')
			{
				str = va_arg(ap, char *);
				len = _strlen(str);
				for (j = 0; j < len; j++)
					_putchar(str[j]);
				count += len;
				i++;
			}
			else
			{
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
