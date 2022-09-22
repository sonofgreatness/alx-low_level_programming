#include<string.h>

/*returns lenght of  string*/

int/*get length of string*/

_strlen(char *s)

{

	const char *cc = (char *) s;

	return (strlen(cc));

}
/*turns string to all upper*/
char/*function definition*/
*string_toupper(char *x)

{

	int i;
	char *p;
	int len;


	len = strlen(x);

	for (i = 0; i < len; i++)

	{

		p = &x[i];

		if(*p >= 97 && *p <= 122)

		{
			x[i] = *p - 32;
		}

		else if (*p >= 65 && *p <= 90)

		{
			x[i] = *p;
		}

	}


	return(x);

}
