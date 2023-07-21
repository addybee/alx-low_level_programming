#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - print strings, followed by a new line.
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vp;

	va_start(vp, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vp, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vp);
}
