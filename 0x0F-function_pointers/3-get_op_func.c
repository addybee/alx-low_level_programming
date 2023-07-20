#include "3-calc.h"
/**
 * get_op_func -  returns a pointer to the function that corresponds to the
 * operator given as a parameter.
 * @s: the operator passed as argument to the program
 * Return: a pointer to function that matches to the operator in the parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t operation[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	i = 0;
	while (i < 5)
	{
		if (*operation[i].op == *s && !(*(s + 1)))
			return (operation[i].f);
		i++;
	}
	return (NULL);
}
