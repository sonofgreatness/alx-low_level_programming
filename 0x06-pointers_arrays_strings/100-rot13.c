#include<string.h>
/*weak encryption*/
char/*function definition*/
* rot13(char *x)

{

	int len;
	int i;
	int temp;
	char *p;

	len = strlen(x);

	for (i = 0; i < len; i++)

	{

		p = &x[i];
		temp = *p + 13;

		if (temp < 122)
		{
			temp = temp - 56;

		}

		else if (temp <= 96 && temp >= 91)
		{

			temp = temp + 6;

		}

		*(x + i) = temp;

	}

return (x);

}
