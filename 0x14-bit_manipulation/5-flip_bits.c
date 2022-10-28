#include "main.h"
/*Returns numbers of 1st bits that are diff btwen 2 nums*/
unsigned int
/*function definition*/
flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;

for (nbits = 0; n || m; n >>= n, m >>= m)
{
	if ((n & 1) != (m & 1))
		nbits++;

}
return (nbits);
}
