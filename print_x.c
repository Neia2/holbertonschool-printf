#include "main.h"
/**
 * help_x - Helper function for printing hexadecimal numbers. It prints
 *          the hexadecimal number n recursively. It updates the count
 *          of characters printed through the pointer pcount.
 * @n: Hexadecimal number to be printed.
 * @uppercase: Flag indicating whether to print in uppercase or not.
 * @pcount: Pointer to the count of characters printed.
 */
void help_x(unsigned int n, int uppercase, int *pcount)
{
	int remainder;

	if (n != 0)
	{
		help_x(n / 16, uppercase, pcount);
		remainder = n % 16;
		if (remainder < 10)
		{
			(*pcount)++;
			_putchar(remainder + '0');
		}
		else
		{
			if (uppercase == 1)
				_putchar(remainder - 10 + 'A');
			else
				_putchar(remainder - 10 + 'a');
			(*pcount)++;
		}
	}
}
/**
 * print_h - Prints hexadecimal numbers, from the list of arguments.
 *           It uses the help_x helper function to perform the actual printing.
 * @ptr: Pointer to the list of arguments.
 * @uppercase: Flag indicating whether to print in uppercase or not.
 *
 * Return: the count of characters printed.
 */
int print_h(va_list *ptr, int uppercase)
{
	int count = 0;
	unsigned int i = va_arg(*ptr, unsigned int);

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
		help_x(i, uppercase, &count);
	return (count);
}
/**
 * print_x - Print hexadecimal numbers in lowercase from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 * Return: the count of characters printed.
 */
int print_x(va_list *ptr)
{
	return (print_h(ptr, 0));
}
/**
 * print_X - Print hexadecimal numbers in uppercase from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 *
 * Return: the count of characters printed.
 */
int print_X(va_list *ptr)
{
	return (print_h(ptr, 1));
}
