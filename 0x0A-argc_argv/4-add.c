#include <stdio.h>
#include <stdlib.h>
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
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			if (j == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += j;
		}
		printf("%d\n", sum);
	}
	return (0);
}
