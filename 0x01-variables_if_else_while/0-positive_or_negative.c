#include <stdlib.h>

#include <time.h>
#include<stdio.h>


/* checks if random number is positive or negative*/

int/*entry point for program */

main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)

	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)

       	{
		printf("%d is positive\n", n);
		

	}
	else
	 {
		
		printf("%d is negative\n", n);

	}

		return (0);

}
