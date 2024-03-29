#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * fund_function - contain the function that selects the correct function
 * @format: pointer to a character representing the format specifier
 *
 * Return: NULL or function pointeur
*/
int(*fund_function(const char *format))(va_list)
{
	int index;
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pourcentage},
		{"i", print_integ},
		{"d", print_integ},
		{NULL, NULL}
	};

	for (index = 0; index <= 4; index++)
	{
		if (*ops[index].ap == *format)
		{
			return (ops[index].f);
		}
	}
	return (NULL);
}
