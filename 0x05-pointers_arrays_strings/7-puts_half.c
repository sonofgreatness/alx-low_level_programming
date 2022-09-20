#include<stdio.h>

#include <string.h>

/*returns lenght of  string*/

int/*get length of string*/

_strlen(char *s)

{

	const char *cc = (char *) s;

	return (strlen(cc));

}




/*half function*/
void/*half function*/
puts_half(char *str)

{

	int len;
	int i;
	int half;
	char *t;

	len = _strlen(str);
	half = len / 2;
		if (len % 2 == 0)
		{

			for (i = half; i < len; i++)
				{
					t = &str[i];
					fputc(*t, stdout);
				}
				fputc('\n', stdout);

		}

		else
		{

			for (i = half; i < len; i++)
				{
					t = &str[i];
					fputc(*t, stdout);
				}
				t = &str[(len - 1) / 2];
				fputc(*t, stdout);
				fputc('\n', stdout);
		}
}
