#include "main.h"
/**
 * _palchecker - palindrome checker for is_palindrome
 * @txt: the string
 * @l: length of string
 * @c: counter
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int _palchecker(char *txt, int c, int l)
{
	if (c >= l)
		return (1);
	else if (txt[l] != txt[c])
		return (0);
	return (_palchecker(txt, c + 1, l - 1));
}
/**
 * _strlen -  returns the length of a string.
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to the string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (_palchecker(s, 0, _strlen(s) - 1));
}
