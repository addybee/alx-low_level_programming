#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * xch - check the string for nondigit
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer
 */
int xch(int argc, char **argv)
{
	int i;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
				return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i, sum, j;

	sum = 0;
	if (argc < 2)
		printf("%d\n", sum);
	else if (xch(argc, argv))
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			sum += j;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
