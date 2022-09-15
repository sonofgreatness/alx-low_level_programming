#include<stdio.h>

void/*exclude 2 and 4*/

print_most_numbers(void)

{

	int i;

	int ofs;

	ofs = 48;
	i = 0;
		while (i < 10)

		{

			if(i == 2)

			{

				i++;

			}
			if (i == 4)
			{
				i++;
			}
			else

			{

				putchar(ofs+i);

				i++;
			}
		

		}
putchar('\n');
}
