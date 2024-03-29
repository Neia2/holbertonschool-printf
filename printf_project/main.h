#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct op - new struct type defining a printer.
 * @ap: representing a data type.
 * @f: function pointers
 */
typedef struct op
{
	char *ap;
	int (*f)(va_list arg);

} op_t;

int (*fund_function(const char *format))(va_list);
int _putchar(char c);
int print_str(va_list arg);
int print_char(va_list arg);
int print_pourcentage(__attribute__((unused))va_list arg);
int _printf(const char *format, ...);
int print_integ(va_list arg);

#endif
