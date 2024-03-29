#include "main.h"
#include <stdlib.h>
/**
 * print_str - Prints a string.
 * @arg: A list of arguments pointing to the string
 *
 * Return: int if success
 */
int print_str(va_list arg)
{
	int index;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (index = 0; str[index]; index++)
	{
		_putchar(str[index]);
	}
	return (index);
}
