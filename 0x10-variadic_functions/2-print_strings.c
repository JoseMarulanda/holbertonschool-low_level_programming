#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a string
 * @separator: is the string to be printed between
 * @n:  number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *str;

	va_start(print, n);
	

	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);		
		if (str  == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			separator = "";
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
