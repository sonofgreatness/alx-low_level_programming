#include<stdio.h>

/*Program to print '_putchar'*/

int /*entry point of the program */

main(void)
{
	int i;
			 int size;
	int st[8] = {'_','p','u','t','c','h','a','r'};
		size = 8;
	for (i=0; i<size;i++)
		{

			putchar(st[i]);

		}

	putchar('\n');

	return (0);

}
