#include<stdio.h>

#include <string.h>

/*returns lenght of  string*/

int/*get length of string*/

_strlen(char *s)

{

const char *cc = (char *) s;

return (strlen(cc));

}



/*prints*/



void/*printa string to stdout */

_puts(char *str)

{



fputs(str, stdout);



}
/*prints reverse*/
void/*definition*/
print_rev(char *s)

{

	int i;
	int j;

	int len;
	int lena;
        char *t;
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{

	lena = i + 1;
	j = len - lena;
	t = &s[j];


	fputc(*t, stdout);
	}

	fputc('\n', stdout);


}
