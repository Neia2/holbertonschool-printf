#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_str - Prints a string to stdout
 * @str: Pointer to the string to be printed
 *
 * Return: Number of characters printed
 */

int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
/**
 * print_digit - Prints a number in a given base
 * @n: The number to be printed
 * @base: The base to be used for printing (e.g., 10 for decimal, 16 for hex)
 *
 * Return: Number of characters printed
 */
int print_digit(long n, int base)
{
int count = 0;
char	*symbols = "0123456789abcdef";

if (n < 0)
   {
	write(1, "-", 1);
	return (print_digit(-n, base) + 1);
   }
else if (n < base)
   {
return (_putchar(symbols[n]));

   }
else
   {
	count = print_digit(n / base, base);
	return (count + print_digit(n % base, base));
   }
}
/**
 * print_format - Prints formatted output
 * @specifier: The format specifier ('c', 's', 'd', 'x')
 * @ap: Variable argument list
 *
 * Return: Number of characters printed
 */
int print_format(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
   {
		count = _putchar(va_arg(ap, int));
   }
   else if (specifier == 's')
      {
		char *str = va_arg(ap, char *);
      count += print_str(str);
      }
   else if (specifier == 'd' || specifier == 'i')
   {
		count += print_digit(va_arg(ap, long), 10);
   }
   else if (specifier == 'x')
   {
		count +=  print_digit(va_arg(ap, long), 16);
   }
   else
   {
	_putchar(specifier);
		count++;
   }
		return (count);
}
/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
      {
		   count += print_format(*(++format), ap);
      }
		else
      {
		   _putchar(*format);
		   count++;
	   }
      ++format;
}
	va_end(ap);
	return (count);
}
/**
 * main_counter - Test function for _printf
 *
 * Return: Always returns 0
 */
int main_counter(void)
{
	int count;

	count = _printf("hello %s\n", "Maria");
	_printf(" yhe chars written are %d\n", count);
	count = _printf("The chars are written are %d\n", count);
return (0);
}
