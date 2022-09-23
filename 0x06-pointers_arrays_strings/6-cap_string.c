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
string_toupper(char k)

{

char *p;
p = &k;
	if (*p >= 97 && *p <= 122)
	{
		k = *p - 32;
	}

	else if (*p >= 65 && *p <= 90)
	{
		k = *p;
	}

return (k);

}
/*capitalize string*/
char/*function definition*/
* cap_string(char *x)
{


int len;
int i;
char *p;
int j;
char c;

/* declare taboo list*/
char tl[13];
len  = strlen(x);

*tl = '}';
*(tl + 1) = '\n';
*(tl + 2) = '\t';
*(tl + 3) = ',';
*(tl + 4) = ';';
*(tl + 5) = '"';
*(tl + 6) = '?';
*(tl + 7) = '(';
*(tl + 8) = ')';
*(tl + 9) = '{';
*(tl + 10) = '!';
*(tl + 11) = '.';
*(tl + 12) = ' ';


for (i = 0; i < len; i++)
{
p = &x[i];

c = 't';
	if (i == 0)
	{
		x[i] = string_toupper(*p);
	}

/*check if element is not in taboo list */

	for (j = 0; j < 13; j++)
	{
		if (*p == tl[j])
		{
			c = 'c';
		}

	}
	if (c == 'c')
	{
		x[i + 1] = string_toupper(*(p + 1));
	}


}

return (x);
}






