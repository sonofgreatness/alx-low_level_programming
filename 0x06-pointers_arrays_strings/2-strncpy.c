#include<string.h>
/*returns lenght of  string*/
int/*get length of string*/
_strlen(char *s)
{
const char *cc = (char *) s;
return (strlen(cc));
}

/*copies string*/
char/*function definition*/
* _strncpy(char *dest, char *src, int n)

{
	int i;
	char c;

	c = 't';

for (i = 0; i < n ; i++)

{
	if (src[i] != '\0')

	{

		dest[i] = src[i];

	}

	if (c == 's')
	{
		dest[i] = '\0';
	}

	if (src[i] == '\0')
	{
		dest[i] = src[i];
		c = 's';
	}

}
	return (dest);
}
