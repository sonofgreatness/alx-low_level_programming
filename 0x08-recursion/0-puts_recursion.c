#include<stdio.h>
#include<string.h>
/*returns lenght of  string*/

int/*get length of string*/
_strlen(char *s)
{
const char *cc = (char *) s;
return (strlen(cc));

}
/*returns 1st char of string*/
char
*cutStringAt(char *xo)
{

int le;
char dest[1000];

int i;

int j;
char *q;


le = strlen(xo);

	for (i = 1; i < le ; i++)

			 {

					j = i - 1;

					dest[j] = *(xo + i);


			}


	q = dest;

return (q);
}

/*function to use recursion to puts */
void/*does puts function*/
_puts_recursion(char *s)

{

char *p;
int len;
len = strlen(s);

	if (len == 1)

	{

	putchar(*(s + 0));

		putchar('\n');


	}
	else
	{

	putchar(*(s + 0));

	p = cutStringAt(s);

	_puts_recursion(p);
	}

}
