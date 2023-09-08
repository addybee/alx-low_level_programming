#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUF 64
void printMagic_Class(char *head);
void printData_Version(char *head);
void printABI(char *head);
void printType_Addr(char *head);
/**
 * main - entry point
 * @ac: number of arg
 * @av: list of args
 * Return: Always 1.
 */
int main(int ac, char **av)
{
	int rdbyte;
	int fh_elf;
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
		exit(99);
	}
	rdbyte = read(fh_elf, headf, BUF);
	if (rdbyte < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		exit(98);
	}
	if (headf[0] != 0x7f || headf[1] != 'E' || headf[2] != 'L' || headf[3]
	!= 'F')
	{
		dprintf(STDERR_FILENO, "Error: %s is not a valid ELF file.\n",
				av[1]);
		close(fh_elf);
		exit(98);
	}
	lseek(fh_elf, 0, SEEK_SET);
	/* display the header file */
	printf("ELF Header:\n");
	printMagic_Class(headf);
	printData_Version(headf);
	printABI(headf);
	printType_Addr(headf);
	close(fh_elf);
	return (1);
}
/**
 * printMagic_Class - prints the magic and class from an elf header
 * @head: header information
 * Return: void
 */
void printMagic_Class(char *head)
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
	printf(" %-35s", "Class:");
	if (head[4] == 1)
		printf("ELF32\n");
	else if (head[4] == 2)
		printf("ELF64\n");
	else
		printf("<unknown: %02X>\n",  head[4]);
}

/**
 * printData_Version - prints the information about endian of the data and
 * version from the elf header
 * @head: header information
 * Return: nothing
 */
void printData_Version(char *head)
{
	printf(" %-35s", "Data:");
	if (head[5] == 1)
		printf("2's complement, little endian\n");
	else if (head[5] == 2)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02X>\n", head[5]);
	/* prints version info from elf header */
	printf(" %-35s", "Version:");
	if (head[6] <= EV_CURRENT)
	{
		printf("%d", head[6]);
		if (head[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
	{
		printf("<unknown %%lx>");
	}
}

/**
 * printABI - prints abi version from header data
 * @head: header information
 * Return: void
 */
void printABI(char *head)
{
	printf(" %-35s", "OS/ABI:");
	switch (head[7])
	{
	case 0:
	case 1:
		printf("UNIX - System V\n");
		break;
	case 2:
		printf("UNIX - HP-UX\n");
		break;
	case 3:
		printf("UNIX - NetBSD\n");
		break;
	case 4:
		printf("UNIX - Linux\n");
		break;
	case 5:
		printf("UNIX - Solaris\n");
		break;
	case 6:
		printf("UNIX - IRIX\n");
		break;
	case 7:
		printf("UNIX - FreeBSD\n");
		break;
	case 8:
		printf("UNIX - Tru64\n");
		break;
	case 9:
		printf("UNIX - ARM architecture\n");
		break;
	case 10:
		printf("UNIX - Sand-alone (embedded)\n");
		break;
	default:
		printf("<unknown: %02x>\n", head[7]);
		break;
	}
	printf(" %-35s%d\n", "ABI Version:", head[8]);
}

/**
 * printType_Addr - prints elf filetype and entry address from header
 * @head: header information
 * Return: void
 */
void printType_Addr(char *head)
{
	u_int16_t tp;

	tp = *((u_int16_t*)(head + 16));
	printf(" %-35s", "Type:");
	if (tp == 1)
		printf("REL (Relocatable file)\n");
	else if (tp == 2)
		printf("EXEC (iExecutable file)\n");
	else if (tp == 3)
		printf("DYN (Shared object file)\n");
	else if (tp == 4)
		printf("CORE (Core file)\n");
	else
		printf("NONE <unknown>: %02x\n",  tp);
	printf(" %-35s0x%X\n", "Entry point address:", *((u_int32_t*)(head + 24)));
}
