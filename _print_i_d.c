#include "main.h"
/**
 * print_i - Prints integers from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 * Return: the count of characters printed.
*/
int print_i(va_list *ptr)
{
	int count = 0;
	int i = va_arg(*ptr, int);

	help_i(i, &count);
	return (count);
}
/**
 * help_i - This function is a helper for print_i.
 *          It prints the integer i recursively.
 *          It updates the count of characters printed
 *          through the pointer pcount.
 * @i: Integer to be printed.
 * @count: Pointer to the count of characters printed.
 */
void help_i(long int i, int *count)
{
	if (i < 0)
	{
		_putchar ('-');
		i = -i;
		(*count)++;
	}
	if (i / 10 != 0)
	{
		help_i(i / 10, count);
	}
	_putchar(i % 10 + '0');
	(*count)++;
}
