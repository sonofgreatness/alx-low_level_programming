#include<stdio.h>
/*program  to print arguments*/
int /*entry point of program*/
main(int argc, char *argv[])
{
int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
return (0);
}
