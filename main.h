#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_null(void);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int handle_default(char c);
int print_integer(va_list args);
int handle_format(char c, va_list args);

#endif /* MAIN_H */
