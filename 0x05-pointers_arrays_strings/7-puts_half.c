#include<stdio.h>

#include <string.h>

/*returns lenght of  string*/

int/*get length of string*/

_strlen(char *s)

{

	const char *cc = (char *) s;

	return (strlen(cc));

}





void puts_half(char *str)

{

			int len ;

					int i;

				int half;


						int m;



							char *t;







							len = _strlen(str);

								half = len/2;

							m = (len -1)/2;

									if (len % 2 ==0)

						{

							for (i = half; i < len; i++)
							{


								t = &str[i];

								fputc(*t, stdout);

							}

						}

						else

						{

							for (i = half; i < len; i++)

							{



								t = &str[i];

								fputc(*t, stdout);



							}

							t = &str[m];

							fputc(*t, stdout);

						}

}
