#include<string.h>

/*returns lenght of  string*/
int/*get length of string*/
_strlen(char *s)

{
const char *cc = (char *) s;
return (strlen(cc));
}

/*compares 2 strings */

int/*function definition*/

_strcmp(char *s1, char *s2)

{ 
return (*s1 -   *s2);
}
