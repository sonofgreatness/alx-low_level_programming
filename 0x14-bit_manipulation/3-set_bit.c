#include "main.h"
/* SETS BIT AT INDEX*/
/*
*set_bit - sets value of a bit at an index to 1
* @ unsigned long int *n - pointer to int to be modied
*@unsigned int index - thr index of the bit to set
*Return: 1 if it worked -1 on error
*/
int 
/*function definition*/
set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= 63; (*n) >>= (*n), i++)
	{
		if (index == 1)
		{
			if (*n & 1)/*bitat index=1*/
			{
				*n = *n & 1;
				return (1);
			}
			else
			{
				*n = *n ^ 1;
				return (1);
			}

		}
	}
return (-1);
}
