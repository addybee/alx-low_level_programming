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
	int i, sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
