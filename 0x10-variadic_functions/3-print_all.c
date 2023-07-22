#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * _g_char - prints characters
  * @ch: character to print
  */
void _g_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}
/**
  * _g_int - prints integers
  * @d: integer to print
  */
void _g_int(va_list d)
{
	printf("%d", va_arg(d, int));
}
/**
  * _g_float - prints floats
  * @fl: float to print
  */
void _g_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}
/**
  * _g_str - prints strings
  * @str: string to print
  */
void _g_str(va_list str)
{
	char *string = va_arg(str, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	unsigned int id, j;
	char *sp;
	va_list vp;

	t_k tk_list[] = {
		{'c', _g_char},
		{'i', _g_int},
		{'f', _g_float},
		{'s', _g_str}
	};
	id = j = 0;
	sp = "";
	va_start(vp, format);
	while (format && format[id])
	{
		j = 0;
		while (j < 4)
		{
			if (format[id] == tk_list[j].task)
			{
				printf("%s", sp);
				tk_list[j].f(vp);
				sp = ", ";
			}
			j++;
		}
		id++;
	}
	printf("\n");
	va_end(vp);
}
