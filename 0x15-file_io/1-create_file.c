#include "main.h"
size_t _strlen(char *s);
/**
 * create_file - creates a file.
 * @filename: name of the file you want to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fh;

	if (!filename)
		return (-1);
	fh = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fh < 0)
	{
		return (-1);
	}
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
		s++;
	}
	return (counter);
}