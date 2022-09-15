#include<stdlib.h>

#include<stdio.h>



/*Fizz Buzz program*/

int/*helper function*/
discriminator (int i)

{

	if(i % 3 == 0)

	{

		if(i % 5 == 0)

		{

			return (3);

		}

		return (1);

	}

	if(i % 5 == 0) 

	{

		return (2);

	}

	else

	{

		return (0);

	}

}

int/*program entry point*/

main(void)

{

	 int i;

	 int j ; 

	 for (i = 1; i <= 100; i++)

	 {

		 j = discriminator(i); 

		 if (j == 0)

		 {

			 printf("%d ",i);

		 }

		 else if (j == 1)

		 {

			 printf("Fizz ");

		 }

		 else if (j == 2)

		 {

			 printf("Buzz "); 

		 }

		 else if (j == 3)

		 {

			 printf("FizzBuzz");

		 }

				 

	 }

	putchar('\n');



	 return (0);



}
