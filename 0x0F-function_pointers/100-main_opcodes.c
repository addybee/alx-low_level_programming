#include <stdlib.h>
#include <stdio.h>
/**
  * main - define function
  * @void - describe argument
  * Return: what does it return?
  */
int main(int argc char *argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
	       	exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
