#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - entry point
  * @argc: number of arguements
  * @argv: pointer to array of pointers
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (n2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(n1, n2);
	printf("%d\n", result);
	return (0);
}
