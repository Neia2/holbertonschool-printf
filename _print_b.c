#include"main.h"
/**
 * print_b - This function prints a binary representation of an unsigned
 *           integer by utilizing the help_o helper function if the integer
 *           is non-zero. If the integer is zero, it simply prints '0'.
 *           It takes a variable argument list pointer ptr containing the
 *           unsigned integer to be printed. It returns the count of
 *           characters printed.
 * @ptr: Pointer to the variable argument list containing the
 *       unsigned integer to be printed.
 *
 * Return: The count of characters printed.
 */
int print_b(va_list *ptr)
{
	int count = 0;
	unsigned int i = va_arg(*ptr, unsigned int);

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
		print_binary(i, &count);
	return (count);
}
/**
 * print_binary - This function prints the binary representation of
 *                an unsigned integer recursively. It updates the count
 *                of characters printed through the pointer pcount.
 * @i: Unsigned integer to be printed in binary.
 * @pcount: Pointer to the count of characters printed.
 */

void print_binary(unsigned int i, int *pcount)
{

	if (i / 2 != 0)
	{
		print_binary(i / 2, pcount);
	}
	_putchar((i % 2) + '0');
	(*pcount)++;
}
