#include "main.h"

/**
 * handle_default - handle case when specifiers not recognized
 * @c: stores the identifier
 * Return: 2
 */

int handle_default(char c)
{
	_putchar('%');
	_putchar(c);
	return (2);
}
