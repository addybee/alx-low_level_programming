#include "main.h"
size_t _strlen(char *s);
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file you want to append to
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fh;

	if (!filename)
		return (-1);
	fh = open(filename, O_WRONLY | O_APPEND);
	if (fh < 0)
		return (-1);
	if (text_content)
	{
		if (write(fh, text_content, _strlen(text_content)) == -1)
		{
			close(fh);
			return (-1);
		}
	}
	close(fh);
	return (1);
}
/**
 * _strlen - return the length of a string
 * @s: pointer variable of char type
 * Return: length of string
 */
size_t _strlen(char *s)
{
	size_t counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		*s++;
	}
	return (counter);
}
