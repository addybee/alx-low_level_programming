#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to the POSIX standard
 * output.
 * @filename: is the name of the file to be read from
 * @letters: is the number of letters it should read and print
 * return: the actual number of letters it could read and print or 0 if it fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fh;
	ssize_t result;
	char *str;

	if (!filename || !letters)
		return (0);
	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	str = malloc((letters) * sizeof(char *));
	if (str == NULL)
		return (0);
	result = read(fh, str, letters);
	if (result == -1)
	{
		free(str);
		return (0);
	}
	else
	{
		if (write(STDOUT_FILENO, str, result) < 0)
		{
			free(str);
			return (0);
		}
	}
	close(fh);
	free(str);
	return (result);
}
