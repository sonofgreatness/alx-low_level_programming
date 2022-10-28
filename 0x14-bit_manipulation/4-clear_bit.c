/**CLEARS A BIT AT INDEX**/
/*
*clear_bit - sets value at given index to zero
*
*/
int
/*fuction definition*/
clear_bit(unsigned long int *n, unsigned int index)
{

unsigned int i;
i = 1 << index;
if (index > 63)
	return (-1);
/*compares only bits at position index*/
if (*n & i) /*there is a 1 at pos1 of *n*/
	*n = *n ^ i;
	   /*make that 1 a 0*/

return (1);
}

