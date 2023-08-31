#include <unistd.h>
/**
 * _putchar - print out a character to std output
 * @x: character to be printed
*/
void _putchar(char x)
{
	write(1, &x, 1);
}