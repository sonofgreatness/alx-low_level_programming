#include<ctype.h>

int/*function to check case of a letter*/

 print_sign(int n)

{



	if (n > 0)

	{

		putchar('+');

		return (1);

	}

	else if (n == 0)

	{

		putchar('0');

		return (0); 

	}

	else if (n < 0)

	{

		putchar('-');

		return (-1);

	}

}
