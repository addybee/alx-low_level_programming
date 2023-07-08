#include <stdio.h>
/**
 * main - entry point
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer
 */
int main(int argc, char **argv)
{
	(void)argc;
	while (*argv)
		printf("%s\n", *argv++);
	return (0);
}
