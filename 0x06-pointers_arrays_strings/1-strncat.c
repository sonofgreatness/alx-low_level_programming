#include<string.h>
/*returns lenght of  string*/
int/*get length of string*/
_strlen(char *s)
{
const char *cc = (char *) s;
return (strlen(cc));
}
/*add 2 strings */
char
/*function definition*/
* _strncat(char *dest, char *src, int n)

{



	int i;
	int len;
	int newlen;



	len = strlen(dest);






if (n > 0)

{

	for (i = 0; i < n; i++)

	{

		if (src[i] != '\0')

		{

			dest[len + i] = src[i];

			newlen = len + i;

		}

		else

		{

			i = n;

		}

	}

		dest[newlen + 1] = '\0';

		return (dest);

}

else

{

	return (dest);

}

}
