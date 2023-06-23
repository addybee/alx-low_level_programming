#include <unistd.h>
/**
 * _putchar - display char on standard output
 * @x: holds the value of x to be printed on standard output
 * Return: 0 when succeesful
 */
void _putchar(char x)
{
	write(STDOUT_FILENO, &x, 1);
}
