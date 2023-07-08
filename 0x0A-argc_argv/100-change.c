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
	cent = atoi(argv[1]);
		for (i = 0; cent > 0; i++)
	{
		j += (cent / val[i]);
		cent %= val[i];
	}
	printf("%d\n", j);
	return (0);
}
