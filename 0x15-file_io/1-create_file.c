#include "main.h"
/*****CREATES A  FILE  ****/
/*
*filename - name of file
*textcontet - array of characters to WRITE in file
*Return : 1 on success -1
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int wrtr;
int i;

if (filename == NULL)
	return (-1);

fd = open(filename, O_CREAT | O_WRONLY, 0600);

if (fd == -1)
	return (-1);

for (i = 0; text_content[i] != '\0'; i++)
	;

wrtr = write(fd, text_content, i);
if (wrtr == -1)
	return (-1);

close(fd);
return (1);
}
