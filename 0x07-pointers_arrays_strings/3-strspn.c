#include<string.h>
/*returns lenght of  string*/
int/*get length of string*/
_strlen(char *s)
{
const char *cc = (char *) s;
return (strlen(cc));
}

/*check character in str*/
int/*function definition*/
isInString(char c, char *st)
{

	int j;
	int lenst;
	int rts;

	rts = 0;
	lenst = strlen(st);

for (j = 0; j < lenst; j++)

{



	if (*st == c)

	{

		rts = 1;

	}

}

	return (rts);


}

/*finds prefix length*/
unsigned int/*function defn*/
_strspn(char *s, char *accept)

{



	int i;
	int len;
	unsigned int rt;
	char *p;
	int test;

	len = strlen(s);

	rt = 1;
	i = 0;

while (i < len)

{

		p = &s[i];
		test = isInString(*p, accept);

	if (test != 1)

	{

		rt++;

	}

	else

	{

		i = len;

	}

	i++;

}

	return (rt);
}


