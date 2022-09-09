#include <stdio.h>

/*This program prints letter of the alphabet*/

int/*entry point of of program*/ 

main()

{

	int x;

	for(x = 'A'; x <= 'J'; x++) /*jumps from 'A'(65) to 'B'(66) to ... in order.*/

	{ 

		putchar((x%65) +'0');

	}

	putchar('\n');

	return (0);

}
