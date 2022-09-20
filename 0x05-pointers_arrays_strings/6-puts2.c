#include<stdio.h> 

#include <string.h>

/*returns lenght of  string*/

int/*get length of string*/ 

_strlen(char *s)

{

	const char *cc = (char *) s;                                                                                                                                                                                          

	return (strlen(cc));  

}



/*prints string*/

void /*function definition*/puts2(char *str)

{



	int len;                                                                                                 

	int i;                                                                                                                                                                                                   

	char *t;  	
	len = _strlen(str);	

	for(i = 0; i < len; i=i+2)

	{                                                                                               

		t = &str[i];                                                             

		fputc(*t, stdout);

	}

	fputc('\n', stdout);

}
