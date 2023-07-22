#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct t_key - holds the function for printing different format
 * @task: function to use for printing
 * @f: character format
 */
typedef struct t_key
{
	char task;
	void (*f)(va_list);
} t_k;
#endif
