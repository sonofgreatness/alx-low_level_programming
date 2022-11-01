#include "main.h"
#include <stdio.h>
/******A Program that copies content of a file to another  ****/
/*Takes 2 arguments (file_from , file_to)
*IF #argumets == 2 print "Usage : cp
*file_from file_to" exit (97); 
*IF  you can't open fileFrom exit (98); 
*IF you can't open or write file_to exit (99)
*IF you can't close any file exit (100)
*permissions for file_to 0664
*read 1024 bytes at a time 
*/
int main (int argc, char *argv[])
{
char *c; 
char *d; 
char *t; 
char *u; 
int i; 
int fdr; 
int fdr2; 
int wrtr; 
int j; 
int k; 
c = "Usage: cp file_from file_to"; 
d = "Error: Can't read from file "; 
t = "Error Can't write to "; 
u = "Error Can't close fd ";


if (argc != 3)
	{
		/*print exit string*/
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]); 
		}

		_putchar('\n'); 
		exit (97); 

	}
      
/*open file_from*/
fdr = open (argv[1], O_RDONLY, 7777); 
if (fdr == -1)
{
	for (j = 0; d[j] != '\0'; j++)
	{
		_putchar(d[j]); 
	}
	for (k = 0; (argv[1])[k] != '\0';k++)
	{
		_putchar ((argv[1])[k]); 

	}
	_putchar('\n'); 
	exit (98);
}

}
