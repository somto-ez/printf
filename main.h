#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct_pointer - structure for printing to stdout
 * @specifier: specifier recognized by printer
 * @run: the function to run when printer is invoked
 */

typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

printer _get_printer(const char *specifier);
int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(va_list);
int _print_decimal(va_list);
int _print_int(va_list);
int _print_char(va_list);
#endif
