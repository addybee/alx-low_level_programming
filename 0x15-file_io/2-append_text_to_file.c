#include "main.h"
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
		if (write(fh, text_content, (sizeof(text_content) - 1)) == -1)
			return (-1);
	}
	close(fh);
	return (1);
}
