#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER 1024
void close_errchk(int fd);
/**
 * main - check the code
 * @ac: number of arg
 * @av: list of args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fh_from, fh_to, counter;
	char buf[BUFFER];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fh_from = open(av[1], O_RDONLY);
	fh_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fh_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			       av[1]);
		exit(98);
	}
	if (fh_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((counter = read(fh_from, buf, sizeof(buf))) > 0)
	{
		if (write(fh_to, buf, counter) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close_errchk(fh_to);
			exit(99);
		}
		if (counter < (int)sizeof(buf))
			break;
	}
	if (counter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		close_errchk(fh_from);
		exit(98);
	}
	close_errchk(fh_from);
	close_errchk(fh_to);
	return (0);
}

/**
 * close_errchk - closes a file descriptor and prints
 * an error message if it fails
 * @fd: file descriptor to close
 * Return: nothing
 */
void close_errchk(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
