#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int f, s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	f = atoi(argv[2]);
	s = atoi(argv[1]);
	printf("%d\n", f * s);
	return (0);
}
