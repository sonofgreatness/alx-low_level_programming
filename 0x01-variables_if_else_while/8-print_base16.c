#include<stdio.h>

/*Program to print ourt all base 16 values */

int /*program entry point*/

main(void)

{
		int x;
		int y;

		for (x = 'A'; x <= 'J'; x++)/*print 0-9*/



		{

			    putchar((x % 65) + '0');



		}

		for (y = 'a'; y <= 'f'; y++)

		{



			    putchar(y);

		}

		putchar('\n');

		return (0);

}
