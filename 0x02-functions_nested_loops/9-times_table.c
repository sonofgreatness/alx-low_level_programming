#include<stdio.h>
void/*prints times 9 table */
times_table(void){



	int i;

	int j;

	



	for(i = 0; i <= 9; i++)

	{

		for(j = 0 ; j <= 9; j++)

		{

			

			putchar(i*j + '0');
			putchar(',');
			putchar('\t');
                                     
		}

		putchar('\n');

	}

}
