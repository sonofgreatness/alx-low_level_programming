#include<ctype.h>

int/*function to check case of a letter*/

 print_sign(int n)

{



	if (n > 0)

	{
		return (1);
		putchar('+');

 	}

	else if (n == 0)
	{
		return (0);
		putchar('0');
	}

	else

	{

		return (-1);
		putchar('-'); 
	}

}
