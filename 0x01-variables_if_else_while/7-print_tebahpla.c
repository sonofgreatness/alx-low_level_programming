#include <stdio.h>

/*This program prints letter of the alphabet*/

int/*entry point of of program*/ 

main()

{

	int x;

	for(x = 'z'; x >= 'a'; x--) /*jumps from 'z' to 'a' to.*/

	{ 

		putchar(x);

	}

	putchar('\n');

	return (0);

}
