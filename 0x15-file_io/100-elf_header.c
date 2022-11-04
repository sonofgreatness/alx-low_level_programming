#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf (int elf);

/*
* check elf - Checks if a file is an ELF file
* @i_ident - a pointer to an array containing the* ELF magic numbers
* Description : If the file is not an ELF file - *exit code 98
**/

void check_elf(unsigned char *e_ident)
{
int i;
	for (i = 0; i <4; i++)
	{
		if (e_ident[i] != 127 &&
		  e_ident[i] != 'E' &&
		  e_ident[i] != 'L' &&
		  e_ident[i] != 'F')
		{

			dprintf(STDERR_FILENO, "Error : Not an ELF file\n");
			exit(98);

		}

	}

}
/* Prints ELF Numbers
*Description : Magic numbers are seperated by spaces
* */

void print_magic (unsigned char *e_ident)
{

	int i;
	printf (" Magic:        ");
	for (i = 0; i < EI_NIDENT; i++)
	{

		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf ("\n");
		else
			printf(" ");

	}


}


/*
* print_class - Prints the class of an ELF header
*@e_ident : A pointer to an array containing the *ELF class
*/


void print_class(unsigned char *e_ident)
{

	printf("  class:        ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
		        break;
		case ELFCLASS64:
			printf("ELF64\n");
		default:
			printf("unknown: %x >\n", e_ident[EI_CLASS]);


	}


}


/*
*print data - prints the data of an ELF header
* @e_ident : A pointer to an array conatining the
* ELF class
*/

void print_data (unsigned char *e_ident)
{

printf(" Data:        ");
	switch(e_ident[EI_DATA])
	{

		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
		       break;
		case ELFDATA2MSB:
		      printf("2 's complement , big endian\n");
		      break;

	}
}


/*
*print version - Prints the version of an ElF header
*@e_ident : A pointer to an array containing the ELF version
**/
void print_version(unsigned char *e_ident)
{

printf(" version:        %d", e_ident[EI_VERSION]);


switch (e_ident[EI_VERSION])
{
	case EV_CURRENT:
		printf("(current)\n");
		break;
	default:
		printf("\n");
		break ;


}


}

/*
*  print_osabi - prints the OS/ABI of an ELF heder
*@e_ident : A pointer to an array containing the elf version
*/

void print_osabi(unsigned char *e_ident)
{

	printf(" OS/ABI:        ");

	switch (e_ident[EI_OSABI])
	{
		case  ELFOSABI_NONE:
			printf("UNIX - System V\n");
		       break;
		case ELFOSABI_HPUX:
		       printf("UNIX - HP-UX\n");
		       break;
		case ELFOSABI_NETBSD:
		       printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");			break ;

		case ELFOSABI_ARM:
			printf ("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standolne App\n");
			break;
		default:
			printf("<unkown: %x>\n",e_ident[EI_OSABI]);
	}

}



/*
 *print_abi - Prints the ABI version of an ELF header
*@e_ident : A pointer to an array containing the ELF ABI version
*/
void print_abi(unsigned char *e_ident)
{
	printf("   ABI version:               %d\n", e_ident[EI_ABIVERSION]);
}


void print_type(unsigned int e_type, unsigned char *e_ident)
{

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("   Type:                  ");

	switch (e_type)
	{

		case ET_NONE:
		       printf("NONE (None)\n");
			break;
	 	case ET_REL:
			printf("RFL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unkown: %x>\n",e_type);

	}

}

void
/*function definition*/
print_entry(unsigned long int e_entry, unsigned char *e_ident)

{
	printf ("  Entry point address:          ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{

		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF00);
		e_entry = (e_entry << 16) | (e_entry >> 16);

	}


	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n",e_entry);

}

/*
* close_elf  Closes an eld file .
* @elf The file descriptor of the ELF file
*/

void close_elf(int elf)
{

	if (close(elf) == -1)
	{

		dprintf(STDERR_FILENO,"Error : Can't close fd%d",elf);
		exit(98);

	}

}
/*
 *main - Displays the information contained
 * ELF header at the start of an ELF file
*/

int
/*entry point of the program*/
main(int argc, char *argv[])
{

	Elf64_Ehdr *header;
	int o,r;

	o = open (argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't read file %s\n", argv[1]);
		exit(98);
	}
	header =  malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error :Can't read file %s\n", argv[1]);
		exit(98);

	}
	r = read (o, header, sizeof(Elf64_Ehdr));	if(r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO,"Error :  %s : No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(o);
	return (argc - argc);


}


