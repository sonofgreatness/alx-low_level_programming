#include<stdio.h>
/*program definition*/
void/*print  n slashes*/
print_diagonal(int n)
{

	int i;
	int j;

	if (n > 0)

	{
		for(i = 0; i < n; i++)
			{	if (i != 0)
				{	for(j = 0; j < i;j++)
					{
						putchar(' ');
					}

				}
				putchar('\\');
				putchar('\n');
			}
	}

	if (n <= 0)

	{

		putchar('\n');

	}

}
