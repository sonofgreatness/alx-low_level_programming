#include "main.h"
/**** READS A FILE AND PRINTS IT STDOUT*****/
/*
*@ letters - number of letters  to read and print
*Returns : 0 on fail to open or filename ==NULL
*/
ssize_t
/*function definition*/
read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rdr, wrtr;
char *buff;

buff = malloc(sizeof(char) * letters);

if (filename == NULL)
	return (0);

fd = open(filename, O_RDWR, 0060);
if (fd == -1)
{
	return (0);
}

rdr = read(fd, buff, letters);
close(fd);
if (rdr == -1)
{	free(buff);
	return (0);

}

wrtr = write(STDOUT_FILENO, buff, rdr);
free(buff);
if (rdr != wrtr)
	return (0);

return (wrtr);
}
