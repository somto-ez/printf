#include "main.h"
/**
 * _get_printer - function that checks for agiven specifier
 * @specifier: the specifier to get a printer for
 *
 * Return: the printer found
 * if no valid printer exists, a default NULL-based printer is returned
 */
printer _get_printer(const char *specifier)
{
	int i;

	static printer printers[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_decimal},
		{"i", _print_int},
		{NULL, NULL}
	};

	for (i = 0; printers[i].specifier != NULL; i++)
	{
		if (*specifier == *(printers[i].specifier))
			break;
	}
	return (printers[i]);
}
