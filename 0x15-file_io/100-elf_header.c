#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>  
#include <sys/types.h>
/**
 * main - check the code
 * @ac: number of arg
 * @av: list of args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
        int fh_elf, counter;

        if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
        fh_elf = open(av[1], O_RDONLY);
	if (fh_elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			       av[1]);
		exit(98);
	}
}