#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	char *s;
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
					_putchar(va_arg(args, int));
					printed_chars++;
					break;

				case 's':
					s = va_arg(args, char *);
					if (s != NULL)
					{
						while (*s)
						{
							_putchar(*s);
							s++;
							printed_chars++;
						}
					}
					else
					{
						char null_str = "(null)";
						int j;
						for (j = 0; null_str[j] != '\0'; j++)
						{
							_putchar(null_str[j]);
							printed_chars++;
						}
					}
					break;

				default:
					_putchar('%');
					_putchar(format[i]);
					printed_chars += 2;
					break;
			}
		}
	}

	va_end(args);

	return (printed_chars);
}
