#include "main.h"
#include <stdlib.h>
int _atoi(char *s);
void print_number(int r);
int _isdigit(int c);
int _strlen(char *s);
int xch(int argc, char **argv);
/**
 * main - entry point
 * @argc: variable of type integer
 * @argv: pointer to a pointer
 * Return: 0 when successful
 */
int main(int argc, char **argv)
{
	int n1, mul;
	char *s1 = "Error";

	mul = 1;
	if (argc != 3 || !xch(argc, argv))
	{
		for (n1 = 0; n1 < _strlen(s1); n1++)
			_putchar(s1[n1]);
		_putchar('\n');
		exit(98);
	}
	for (n1 = 1; n1 < argc; n1++)
		mul *= _atoi(argv[n1]);
	print_number(mul);
	_putchar('\n');
	return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: pointer to a character
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, sign;
	unsigned int number;

	sign = 1;
	number = 0;
	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
		else if (number > 0)
			break;
	}
	return (number * sign);
}

/**
 * _isdigit - check for digits
 * @c: integer c
 * Return: 1 when true and o0 when false
 */
int _isdigit(int c)
{
	char i;
/*	char di[12] = "0123456789";*/

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
/**
 * xch - check the string for nondigit
 * @argc: variable of type int
 * @argv: pointer to a pointer that point to char
 * Return: integer
 */
int xch(int argc, char **argv)
{
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < _strlen(argv[i]); j++)
		{
			if (_isdigit(argv[i][j]) == 0)
				return (0);
		}
	}
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: pointer variable of char type
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter, i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

/**
 * print_number - prints a number
 * @r: Input number
 * Return: nothing
 */

void print_number(int r)
{
	long len, res, i, temp, expo;

	res = r;
	expo = len =  1;
/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

/**/
	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
/*Main */
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}
