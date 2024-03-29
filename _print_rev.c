#include "main.h"
/**
 * print_rev - This function prints a string in reverse order.
 *             It takes a variable argument list pointer ptr
 *             containing the string to be printed. It calculates
 *             the length of the string, then prints each character
 *             in reverse order using _putchar. Finally, it prints
 *             a newline character.
 * @ptr: Pointer to the variable argument list containing the string
 *       to be printed.
 * Return: the number of the characters
*/
int print_rev(va_list *ptr)
{
	int len = 0;
	int i = 0, count = 0;
	char *s = va_arg(*ptr, char *);

	while (s[len] != '\0')
		len++;
	len = len - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
