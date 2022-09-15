#include<stdio.h>

void/*print n underscores*/
print_line(int n)

{

	int i;

	if (n > 0)

	{

		for(i = 0; i <= n; i++)

		{

			putchar('_');

		}

		putchar('\n');

	}

	if (n <= 0)

	{

		putchar('\n');

	}

}


