#include "main.h"

/**
 * _putchar - prints out character
 * @c: store the value of the character
 * Return: c
 * By: Sina Mathew
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
