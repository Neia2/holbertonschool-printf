#include "main.h"
#include <stdarg.h>
/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to the character
 *
 * Return: 1 if success
 */
int print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	return (_putchar(letter));
}
