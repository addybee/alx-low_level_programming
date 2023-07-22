#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: number of parameters
  * Return: sum of all its arguement
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int summ;
	va_list vp;

	if (n == 0)
		return(0);
	va_start(vp, n);
	summ = 0;
	for (i = 0; i < n; i++)
	{
		summ += va_arg(vp, int);
	}
	va_end(vp);
	return (summ);
}
