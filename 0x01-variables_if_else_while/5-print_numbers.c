#include <stdio.h>

/*This program prints letter of the alphabet*/

int/*entry point of of program*/ 

main()

{

	int x;

	for(x = 0; x <= 9; x++) /*jumps from 'A'(65) to 'B'(66) to ... in order.*/

	{ 

         printf("%d",x);

	}

	putchar('\n');

	return (0);

}
