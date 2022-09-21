#include<string.h>
/*function add strings */
char/*functionstart*/
*_strcat(char *dest, char *src)

{

	int lensrc;
	int len;
	int newlen;
	int i;

	len = strlen(dest);
	lensrc = strlen(src);


	for(i = 0; i < lensrc && src[i] != '\0'; i++)

	{

		dest[len + i] =src[i];
		newlen = len + i;

	}
	dest[newlen + 1] = '\0';
	return (dest);

}
