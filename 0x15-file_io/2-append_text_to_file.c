#include"main.h"
/**AppendsText At The End Of A File**/
/*
*append_text_to_file- adds text to a file
*@filename- name of the file
*@text_content- text (string) to add to file
*Return: 1 on success and -1 o failure
*/
int
/*FunctionDefinition*/
append_text_to_file(const char *filename, char *text_content)
{

int fd;
int apdr;
int i;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND, 0664);

if (fd == -1)
return (-1);

for (i = 0; text_content[i] != '\0'; i++)
	;
apdr = write(fd, text_content, i);

if (apdr == -1)
return (-1);

close(fd);
return (1);

}
