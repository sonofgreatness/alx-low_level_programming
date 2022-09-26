#include<string.h>
/*copies fills memory a constant byte*/
char/*char*/
* _memset(char *s, char b, unsigned int n)
{

	unsigned int i;
	char *p;

for (i = 0; i <  n; i++)

{

	p = &s[i];

	*p = b;

}

return (s);
}
