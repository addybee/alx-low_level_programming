#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: number of parameters
  * @...: variable list of arguments
  * Return: sum of all its parameter
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, summer;
	va_list vp;

	if (n == 0)
		return (0);
	va_start(vp, n);
	summer = 0;
	for (i = 0; i < n; i++)
	{
		summer += va_arg(vp, int);
	}
	va_end(vp);
	return (summer);
}
