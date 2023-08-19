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
	const char *p = format;
	char *str;
	const char *format_loop = format;
	va_list ap;
	int count = 0;
	int i = 0;
	int len, j;

	va_start(ap, format);

	if (format == NULL)
		return (0);

	while (format_loop[i] != '\0')
	{
		if (format_loop[i] == '%')
		{
			if (p[i + 1] == '\0')
				return (0);

			if (p[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				count += 1;
			}
			if (p[i + 1] == 's')
			{
				str = va_arg(ap, char *);	
				len = _strlen(str);
				for (j = 0; *str && (j < len); str++)
				{
					_putchar(*str);
				}
				count += len;
			}
			else
			{
				_putchar(p[i + 1]);
				count += 1;
			}
			format_loop++;
		}

		else
		{
			_putchar(format[i]);
			count += 1;
		}

		i++;
	}

	va_end(ap);
	return (count);
}
