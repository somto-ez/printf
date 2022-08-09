#include "main.h"

/**
 * _print_char - prints a character
 * @printed: argument list
 * Return: 1
 */

int _print_char(va_list printed)
{
	_putchar(va_arg(printed, int));
	return (1);
}

/**
 * _print_str - prints a string
 * @printed: argument list
 * Return: number of characters printed
 */

int _print_str(va_list printed)
{
	int add;
	char *str = va_arg(printed, char *);

	if (str == NULL)
		str = "(null)";
	for (add = 0; str[add]; add++)
	{
		_putchar(str[add]);
	}
	return (add);
}
