#include "main.h"
/**
 * set_string - set the value of a pointer to a char
 * @s: a pointer to a pointer to a character
 * @to: a pointer to a character
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
