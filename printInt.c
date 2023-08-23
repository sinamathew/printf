#include "main.h"

/**
 * print_integer - prints out integer
 * @n: integer to prints
 * By: Sina Mathew
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int printed_chars = 0;
	char buffer[9999];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		printed_chars++;
		return (printed_chars);
	}

	if (n < 0)
	{
		_putchar('-');
		printed_chars++;
		n = -n;
	}

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}
	return (printed_chars);
}

