#include <stdio.h>
/**
 * main - entry point
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer 0 when successful
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
