#include<string.h>

/*returns lenght of  string*/

int/*get length of string*/

_strlen(char *s)

{
const char *cc = (char *) s;
return (strlen(cc));

}
/*finds 1st occurernce of c*/
char/*function definition*/
* _strchr(char *s, char c)

{

	int len;
	int i;
	char **p;
	char *t;

	len = strlen(s);

	i = 0;
while (i < len)
{
	t = &s[i];
	if (*t == c)
	{
		p = &t;
		i = len;
	}
	i++;
}


return (*p);

}
