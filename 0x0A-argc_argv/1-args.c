#include<stdio.h>

/*program to print number of args */
int/*entry point of program*/
main(int argc, char *argv[])
{
if  (argv[argc] == NULL)
{
	printf("%d \n", argc - 1);
}
return (0);

}
