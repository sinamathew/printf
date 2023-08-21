#include "main.h"

/**
 * print_string - Print a string.
 * @args: The va_list containing the argument
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		int printed_chars = 0;

		while (*s)
		{
			_putchar(*s);
			s++;
			printed_chars++;
		}
		return (printed_chars);
	}
	else
	{
		print_null();
		return (6);
	}
}
