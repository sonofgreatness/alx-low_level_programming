#include<stdio.h>

void/*0 to 14 10 times*/

more_numbers(void)

{

	int i;
	int j;

	int o;

	o = 0;

	 /*repeat action 10 times*/

	 for (o = 0; o < 10; o++)

	 {

	 /*print line*/

	 for(i = 'A';i <= 'O';i++)
		{
			j = i;

			if (i >  'J')
						{
				putchar(49);
				j = i - 10;
			}

			putchar((j % 65) + '0');

		}

	 putchar('\n');

	 }

}
