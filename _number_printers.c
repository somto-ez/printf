#include "main.h"
/**
 * _print_decimal - prints a decimal number
 * @printed: printed
 *
 * Return: number of chars to be printed
 */
int _print_decimal(va_list printed)
{
	int a[10];
	
	int j, m, n, sum, add;

	n = va_arg(printed, int);
	add = 0;
	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		add++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			add++;
		}
	}
	return (add);
}

/**
 * _print_int - prints an Integer
 * @printed: printed
 *
 * Return: number of int to the printed
 */
int _print_int(va_list printed)
{
	int a[10];
	int j, m, n, sum, add;

	n = va_arg(printed, int);
	add = 0;
	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		add++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			add++;
		}
	}
	return (add);
}
