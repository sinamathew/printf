#include "main.h"

/**
 * handle_format - handle specifier format
 * @c: The format
 * @args: Argument
 * Return: Depends
 */

int handle_format(char c, va_list args)
{
	switch (c)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_string(args));
		case '%':
			return (print_percent());
		case 'd':
		case 'i':
			return (print_integer(args));
		default:
			return (handle_default(c));
	}
}
