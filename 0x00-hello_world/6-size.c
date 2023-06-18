#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare  int variable to hold the byte each data type */
	int a, b, c, d, e;
	/* assign values to the variables declared */
	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long int);
	d = sizeof(long long int);
	e = sizeof(float);
	/* print the size of each data type to standard output */
	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	return (0);
}
