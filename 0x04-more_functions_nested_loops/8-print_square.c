#include<stdio.h>

void/*prints #s*/
print_square(int size)
{

	int i;

	int j;

	for (i = 0; i < size; i++)

	{

		for(j = 0; j < size; j++)

		{

			putchar('#');

		}

		putchar('\n');

	}

}
