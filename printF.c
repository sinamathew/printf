#include "main.h"

/**
 * _printf - a custom printf function
 * By: Sina
 * @format: argument
 * @...: another argument
 * Return: The number os character printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int i;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else
		{
			i++;

			switch (format[i])
			{
				case 'c':
					printed_chars += print_char(args);
					break;
				case 's':
					printed_chars += print_string(args);
					break;
				case '%':
					printed_chars += print_percent();
					break;

				default:
					printed_chars += handle_default(format[i]);
					break;
			}
		}
	}

	va_end(args);

	return (printed_chars);
}
