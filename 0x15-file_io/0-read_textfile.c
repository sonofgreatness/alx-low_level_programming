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
int rdr;
size_t i;
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
if (rdr == -1)
	return (0);

for (i = 0; i < letters && buff[i] != '\0' ; i++)
{
_putchar(buff[i]);
}


close(fd);
free(buff);
return (i);
}
