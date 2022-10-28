#include "main.h"
#include <stdio.h>
/*****CONVERT INT TO BINARY ****/
/*
*binary_to_uint - converts binary number to an unsigned int 
* @b - pointer to string of 1s and 0s
*Return converted number, or 0 there is foreign character in *sring , or if b is a null pointer
*/
unsigned int binary_to_uint(const char *b)

{

int b_len,base_two; 
unsigned int sum;

sum = 0; 
if (!b)
	return (0); 
for (b_len = 0; b[b_len] !='\0'; b_len++)
	;
	for(b_len--, base_two = 1; b_len >= 0; b_len--, base_two *= 2)
	{
		if (b[b_len] != 0 && b[b_len]!= 1)
		 {      
			 return (0); 
		 }	 
		if (b[b_len] & 1)
		{
			sum += base_two; 
		}

	}	


return (sum); 
}
