#include "main.h"
/**
 * print_c - Prints characters from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 * Return: the count of characters printed.
*/
int print_c(va_list *ptr)
{
	char a = va_arg(*ptr, int);

	_putchar(a);
	return (1);
}
/**
 * print_s - prints string from the list of arguments.
 * @ptr: Pointer to the list of arguments.
 * Return: the count of characters printed.
 */
int print_s(va_list *ptr)
{
	char *a = va_arg(*ptr, char *);
	int count = 0, i;

	if (a == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
		count++;
	}
	return (count);
}
