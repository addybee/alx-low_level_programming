#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#define VALIDTYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
void _putchar(char x);
typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
