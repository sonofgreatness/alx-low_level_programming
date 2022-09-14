#include<stdio.h>
void/*prints times 9 table */
times_table(void){



	int i;

	int j;
	int ele; 
	



	for(i = 0; i <= 9; i++)

	{

		for(j = 0 ; j <= 9; j++)

		{

			ele = i*j;
			_putchar(ele + '0');
			_putchar(',');
			_putchar(' ');
                                    

		}

		_putchar('\n');

	}

}
