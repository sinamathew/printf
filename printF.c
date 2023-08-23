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
			printed_chars += _putchar(format[i]);
		else
		{
			i++;
			printed_chars += handle_format(format[i], args);
		}
	}

	va_end(args);

	return (printed_chars);
}
