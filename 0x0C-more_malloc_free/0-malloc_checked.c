#include<stdlib.h>
/*fn  that allocates memory using malloc. */
void/*definition of function*/
* malloc_checked(unsigned int b)

{



	if (malloc(b) == NULL)

	{

		exit(98);

	}

	else

	{

		return (malloc(b));

	}

}
