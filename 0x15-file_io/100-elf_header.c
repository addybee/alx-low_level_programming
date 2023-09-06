#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#define BUF 32
void printClass(char *head);
void printMagic(char *head);
/**
 * main - entry point
 * @ac: number of arg
 * @av: list of args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int rdbyte;
	int fh_elf;
	Elf32_Ehdr head;
	char headf[BUF];

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
	rdbyte = read(fh_elf, &head, sizeof(head));
	if (rdbyte != sizeof(head))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		exit(98);
	}
	if (head.e_ident[EI_MAG0] != ELFMAG0 ||
			head.e_ident[EI_MAG1] != ELFMAG1 ||
			head.e_ident[EI_MAG2] != ELFMAG2 ||
			head.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not a valid ELF file.\n",
				av[1]);
		close(fh_elf);
		exit(98);
	}

	lseek(fh_elf, 0, SEEK_SET);
	rdbyte = read(fh_elf, headf, BUF);
	if (rdbyte < -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		exit(98);
	}
	/* display the header file */
	printf("ELF Header:\n");
	printMagic(headf);
	printClass(headf);
	close(fh_elf);
	return (0);
}

/**
 * printMagic - prints the magic from an elf header
 * @head: header information
 * Return: void
 */
void printMagic(char *head)
{
	int i;

	printf(" Magic:    ");
	for (i = 0; i < 16; i++)
	{
		printf("%02X", head[i]);
		if (i != 15)
			printf(" ");
	}
	printf("\n");
}

/**
 * printClass - prints the class from an elf header
 * @head: header information
 * Return: void
 */
void printClass(char *head)
{
	printf(" Class:");
	if (head[4] == 1)
		printf("%35s\n", "ELF32");
	else if (head[4] == 1)
		printf("%35s\n", "ELF64");
	else
		printf("%35s<unknown: %02X>\n", "", head[4]);
}
