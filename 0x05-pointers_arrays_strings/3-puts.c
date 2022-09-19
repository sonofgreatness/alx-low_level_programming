#include<stdio.h>

/*prints*/

void/*printa string to stdout */

_puts(char *str)

{

fputs(str, stdout);
fputs("\n", stdout);
}
