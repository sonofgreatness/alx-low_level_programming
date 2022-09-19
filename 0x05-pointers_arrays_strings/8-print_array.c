#include<stdio.h>

/*prints array*/

void/*function that prints a given array*/

print_array(int *a, int n)

{



	int i;
	int las;

	las = n - 1;

	if (n > 0)
	{
	for (i = 0; i < las; i++)

	{

		printf("%d, ", a[i]);
	}
	printf("%d", a[las]);
	printf("\n");
	}
	else
	{

		printf("\n");
	}

}
