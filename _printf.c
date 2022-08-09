#include "main.h"

/**
 * _printf - prints input
 * @format: format of string
 * Return: count of characters
 */

int _printf(const char *format, ...)
{
	va_list printed;

	printer printer;

	int i = 0;
	int add = 0;

	va_start(printed, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
		_putchar(format[i]);
		add++;
		}

		if (!format[i])
		{
			break;
		}

			printer = _get_printer(&format[i + 1]);
			if (printer.specifier != NULL)
			{
			add += printer.run(printed);
			i += 2;
			continue;
			}
			_putchar(format[i]);
			add++;

			if (format[i + 1] == '%')
			i += 2;

			else
				i++;
	}
	va_end(printed);
	return (add);
}
