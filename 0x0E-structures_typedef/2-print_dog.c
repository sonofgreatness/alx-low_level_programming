#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
#include<string.h>
#include<stddef.h>
/*checks if struct is null*/
int NullCheck (struct dog *d1)
{
	if (strlen((*d1).name) == 0 && strlen((*d1).owner) == 0)
	{
		if ((*d1).age == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}
	else
	{
	return (0);
	}



}
/*prints out struct*/
void
/*function definition*/
print_dog(struct dog *d)
{

	if (strlen((*d).name) == 0)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if (strlen((*d).owner) == 0)
	{
		printf("Owner: nil\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}

	if ((*d).age + 1	== 1.0)
	{
		printf("Age: nil\n");
	}
	else
	{

		printf("Age: %f\n", (*d).age);
	}
	if (NullCheck(d) == 1)
	{
		printf("\n");
	}
}

