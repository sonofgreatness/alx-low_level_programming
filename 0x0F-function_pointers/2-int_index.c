#include<stdlib.h>
/* searches for an integer*/
int
/*function definition*/
int_index(int *array, int size, int (*cmp)(int))
{
                                                                                                          

			int i; 

			int tester; 
			
			int index;
			i = 0;
			index = -1;

			while (tester == 0)

			{

				if (size == 0)

				{   index = -1;

					tester = 1;

				}

				if (array[i] == cmp(array[i]))

				{

					index = i;

					tester = 1; 

				}

				 if (i == (size - 1))

				{

					tester = 1;

				}

				i++;

			}

			return (index);                                                                                                           

		 
}
