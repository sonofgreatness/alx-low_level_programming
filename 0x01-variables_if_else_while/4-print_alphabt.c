
#include <stdio.h>

/*This program prints letter of the alphabet*/

int/*entry point of of program*/

main()

{

	int x;

	for (x = 'a'; x <= 'z'; x++) /*jumps from 'A'( in order.*/

	{

		if (x != 'e' && x != 'q')


		{
			putchar(x); /*the return value is returned as a parameter*/

		}



	}
		putchar('\n');
		return (0);
}
