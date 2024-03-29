#include"main.h"
/**
 * print_ui - This function prints an unsigned integer by utilizing
 *            the help_ui helper function. It takes a variable
 *            argument list pointer ptr containing the unsigned
 *            integer to be printed. It returns the count of
 *            characters printed.
 * @ptr: Pointer to the variable argument list containing the
 *       unsigned integer to be printed.
 *
 * Return: The count of characters printed.
 */
int print_ui(va_list *ptr)
{
	int count = 0;
	unsigned int i = va_arg(*ptr, unsigned int);

	help_ui(i, &count);
	return (count);
}
/**
 * help_ui - This function is a helper for print_ui. It prints the
 *           unsigned integer i recursively. It updates the count of
 *           characters printed through the pointer pcount.
 * @i: Unsigned integer to be printed.
 * @pcount: Pointer to the count of characters printed.
 */
void help_ui(unsigned int i, int *pcount)
{
	if (i / 10 != 0)
	{
		help_ui(i / 10, pcount);
	}
	_putchar(i % 10 + '0');
	(*pcount)++;
}
/**
 * print_o - Prints octal numbers from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 * Return: the count of characters printed.
 */
int print_o(va_list *ptr)
{
	int count = 0;
	unsigned int i = va_arg(*ptr, unsigned int);

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
		help_o(i, &count);
	return (count);
}
/**
 * help_o - Helper function for printing octal numbers. It prints
 *          the octal number i recursively. It updates the count of
 *          characters printed through the pointer pcount.
 * @i: Octal number to be printed.
 * @pcount: Pointer to the count of characters printed.
 */
void help_o(unsigned int i, int *pcount)
{
	if (i != 0)
	{
		help_o(i / 8, pcount);
		_putchar((i % 8) + '0');
		(*pcount)++;
	}
}
