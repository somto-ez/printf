#include <stdarg.h>
#include "main.h"
#include <stdio.h>
int _printf(const char *format, ...)
{
	va_list printed;

	va_start(printed, format);

	int count = 0, i; /* i is the array of format*/

	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(printed, int));
				break;

				case 's':
					count += print_string(va_arg(printed, char*));
					break;
				default:
				break;
			}
			i += 2;
		}
	}
	va_end(printed);
return (count);
}
