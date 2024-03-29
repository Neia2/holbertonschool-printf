#include "main.h"

/**
 * parse_format - This function parses the format string, identifies format
 *                specifiers, and calls the corresponding printing functions
 *                to print the formatted output
 * @format: Pointer to the format string.
 * @ptr: Pointer to the list of arguments.
 * @opt: Pointer to an array of structures containing
 *       format specifiers and corresponding functions.
 * Return: the total count of characters printed.
*/
int parse_format(const char *format, va_list *ptr, print_f *opt)
{
	int i_f, i_opt, count = 0, found = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i_f = 0; format[i_f] != '\0'; i_f++)
	{
		if (format[i_f] == '%' && format[i_f + 1] == '%')
		{
			_putchar('%');
			count++;
			i_f++;
		}
		else if (format[i_f] == '%')
		{
			for (i_opt = 0; opt[i_opt].symbol != '\0'; i_opt++)
			{
				if (format[i_f + 1] == opt[i_opt].symbol)
				{
					count += opt[i_opt].f(ptr);
					found = 1;
				}
			}
			if (found == 0)
			{
				_putchar('%');
				_putchar(format[i_f + 1]);
				count += 2;
			}
			i_f++;
		}
		else
		{
			_putchar(format[i_f]);
			count++;
		}
	}
	return (count);
}
/**
 * _printf - This function prints formatted output according to the provided
 *           format string and optional arguments. It uses the parse_format
 *          function to parse the format string and print the formatted output.
 * @format: Pointer to the format string.
 * @...: Optional list of arguments.
 * Return: the total count of characters printed
*/
int _printf(const char *format, ...)
{
	va_list ptr;

	print_f opt[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_i},
		{'i', print_i},
		{'u', print_ui},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'b', print_b},
		{'r', print_rev},
		{'\0', NULL}
	};
	va_start(ptr, format);
	va_end(ptr);
	return (parse_format(format, &ptr, opt));
}
