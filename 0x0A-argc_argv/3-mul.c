#include<stdio.h>
#include<stdlib.h>
/*program to find product*/
int /*entry point of program*/
main(int argc, char *argv[])
{
	int z;
	int y;
	int d;



if (argc != 3)
{
printf("Error \n");
return (1);
}
else
{
z = atoi(argv[1]);
y = atoi(argv[2]);
d = y *z;
printf("%d \n", d); }
return (0);
}
