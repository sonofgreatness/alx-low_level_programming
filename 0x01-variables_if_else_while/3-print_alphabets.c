#include <stdio.h>

/*This program prints letter of the alphabet*/

int/*entry point of of program*/

main(void)

{

		int x;
		int y;

		for (x = 'a'; x <= 'z'; x++) /*jumps from 'A'(65) to 'B'(66) to in order.*/

		{

			putchar(x);

		}

		for (y = 'A'; y <= 'Z'; y++)

		{

			putchar(y);

		}

		putchar('\n');

		return (0);

}
