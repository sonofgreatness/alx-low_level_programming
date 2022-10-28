/*RETURNS VALUE OF A BIT AT A GIVEN POSITION*/
/*
*get_bit - gets the values of a bit at index
*@n - the number from which to get the
*@index - the index starting from 0
*Return : value of bit at index index, -1 on error
*/
int
/*function definition*/
get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

		if (n == 0 && index <= 64)
			return (0);

for (i = 0; i <= 63; n >>= n, i++)/*loop reads in binary form of n*/
{
if (index == i)
{
return ((n & 1));  /*perform AND operation on bit at position 1 and  1*/
}
}
return (-1);
}
