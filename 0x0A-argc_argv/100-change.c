#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer 0 when successful
 */
int main(int argc, char **argv)
{
	int i, cent, j;
	int val[5] = {25, 10, 5, 2, 1};

	j = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cent = atoi(argv[1]);
		if (cent < 0)
			printf("%d\n", j);
		for (i = 0; i < 5; i++)
		{
			if (cent == 0)
				break;
			j += (cent / val[i]);
			cent %= val[i];
		}
	}
	printf("%d\n", j);
	return (0);
}
