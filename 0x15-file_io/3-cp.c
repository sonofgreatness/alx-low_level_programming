#include "main.h"
#include <stdio.h>
/******A Program that copies content of a file to another  ****/
/*
* Takes 2 arguments (file_from , file_to)
*IF #argumets == 2 print "Usage : cp
*file_from file_to" exit (97);
*IF  you can't open fileFrom exit (98);
*IF you can't open or write file_to exit (99)
*IF you can't close any file exit (100)
*permissions for file_to 0664
*read 1024 bytes at a time
*/

/****** file open_error_checker****/
/*fopen_err_check*/
void
/*function definition*/
fopend_err_check(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write  to %s\n", argv[2]);
	exit(99);
}
}

int
/*entry point of program*/
main(int argc, char *argv[])
{

	int file_to, file_from, err_close;
	ssize_t nchars, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n",  "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_APPEND, 0664);
	fopend_err_check(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buff, 1024);
		if (nchars == -1)
			fopend_err_check(-1, 0, argv);
		nwr = write(file_to, buff, nchars);
		if (nwr == -1)
			fopend_err_check(0, -1, argv);

	}



	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);

	}

return (0);
}
