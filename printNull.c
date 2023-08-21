#include "main.h"

/**
 * print_null - prints "(null)" to standard output.
 * By Sina Mathew
 */

void print_null(void)
{
	char null[] = "(null)";
	int j;

	for (j = 0; null[j] != '\0'; j++)
	{
		_putchar(null[j]);
	}
}
