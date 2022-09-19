#include<stdio.h>

/*prints array*/

void/*function that prints a given array*/

print_array(int *a, int n)

{



	int i;

	for(i = 0; i < n; i++)

	{

		printf("%d, ",a[i]);
	}
	printf("\n");

}
