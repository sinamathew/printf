#include "main.h"

/**
 * print_char - Print a single character
 * @args: The character to print.
 * Return: Number of characters printed.
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

