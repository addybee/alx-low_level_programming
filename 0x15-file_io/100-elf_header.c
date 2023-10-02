#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
void printMagic_Class(Elf32_Ehdr *head);
void printData_Version(Elf32_Ehdr *head);
void printABI(Elf32_Ehdr *head);
void printType_Addr32(Elf32_Ehdr *head);
void printType_Addr64(int fh_elf, char *el);
/**
 * main - entry point
 * @ac: number of arg
 * @av: list of args
 * Return: Always 1.
 */
int main(int ac, char **av)
{
	size_t rdbyte;
	int fh_elf;
	Elf32_Ehdr headf;

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
	rdbyte = read(fh_elf, &headf, sizeof(headf));
	if (rdbyte != sizeof(headf))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		close(fh_elf);
		exit(98);
	}
	if (headf.e_ident[EI_MAG0] != 0x7f || headf.e_ident[EI_MAG1] != 'E' ||
			headf.e_ident[EI_MAG2] != 'L' || headf.e_ident[EI_MAG3]
			!= 'F')
	{
		dprintf(STDERR_FILENO, "Error: %s is not a valid ELF file.\n",
				av[1]);
		close(fh_elf);
		exit(98);
	}
		/* display the header file */
	printf("ELF Header:\n");
	printMagic_Class(&headf);
	printData_Version(&headf);
	printABI(&headf);
	if (headf.e_ident[EI_CLASS] == ELFCLASS32)
		printType_Addr32(&headf);
	else
		printType_Addr64(fh_elf, av[1]);
	close(fh_elf);
	return (1);
}
/**
 * printMagic_Class - prints the magic and class from an elf header
 * @head: header information
 * Return: void
 */
void printMagic_Class(Elf32_Ehdr *head)
{
	int i;

	printf("  Magic:    ");
	for (i = EI_MAG0; i < EI_NIDENT; i++)
	{
		printf("%02x", head->e_ident[i]);
		if (i != (EI_NIDENT - 1))
			printf(" ");
	}
	printf("\n");
	printf("  %-36s", "Class:");
	if (head->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (head->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %02X>\n",  head->e_ident[EI_CLASS]);
}

/**
 * printData_Version - prints the information about endian of the data and
 * version from the elf header
 * @head: header information
 * Return: nothing
 */
void printData_Version(Elf32_Ehdr *head)
{
	printf("  %-36s", "Data:");
	if (head->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (head->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02X>\n", head->e_ident[EI_DATA]);
	/* prints version info from elf header */
	printf("  %-36s", "Version:");
	if (head->e_ident[EI_DATA] == EV_NONE)
		printf("<unknown %%lx>");
	else
	{
		printf("%d", head->e_ident[EI_DATA]);
		if (head->e_ident[EI_DATA] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
}

/**
 * printABI - prints abi version from header data
 * @head: header information
 * Return: void
 */
void printABI(Elf32_Ehdr *head)
{
	printf("  %-36s", "OS/ABI:");
	switch (head->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - Tru64\n");
		break;
	default:
		printf("<unknown: %02x>\n", head->e_ident[EI_OSABI]);
		break;
	}
	printf("  %-36s%d\n", "ABI Version:", head->e_ident[EI_ABIVERSION]);
}

/**
 * printType_Addr32 - prints elf filetype and entry address from header 32 bit
 * @head: header information
 * Return: void
 */
void printType_Addr32(Elf32_Ehdr *head)
{
	printf("  %-36s", "Type:");
	if (head->e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (head->e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (head->e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (head->e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("NONE <unknown>: %02x\n",  head->e_type);
	printf("  %-36s0x%X\n", "Entry point address:", head->e_entry);
}
/**
 * printType_Addr64 - prints elf filetype and entry address from header 64 bit
 * @fh_elf: file decriptor
 * @el: is the elf header file
 * Return: void
 */
void printType_Addr64(int fh_elf, char *el)
{
	Elf64_Ehdr header;
	Elf64_Ehdr *head;
	size_t rdbyte;

	lseek(fh_elf, 0, SEEK_SET);
	head = &header;
	rdbyte = read(fh_elf, head, sizeof(header));
	if (rdbyte != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", el);
		close(fh_elf);
		exit(98);
	}
	printf("  %-36s", "Type:");
	if (head->e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (head->e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (head->e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (head->e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("NONE <unknown>: %02x\n",  head->e_type);
	printf("  %-36s0x%lX\n", "Entry point address:", head->e_entry);
}
