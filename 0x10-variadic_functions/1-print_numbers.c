#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vp;

	va_start(vp, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vp, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vp);
}
