#include<string.h>

/*1337 encoder*/

char/*function definition*/

*leet(char *x)

{

	int i;
	int j;
	int len;
	char *p;
	char cchar;
	char  rpl[5];
	char lcchar;
	char rl[5];

	len = strlen(x);

	*rl = 'A';
	*(rl + 1) = 'E';
	*(rl + 2) = 'O';
	*(rl + 3) = 'T';
	*(rl + 4) = 'L';

	*rpl = '4';
	*(rpl + 1) = '3';
	*(rpl + 2) = '0';
	*(rpl +3) = '7';
	*(rpl +4) = '1';

	for(i = 0; i < 5; i++)

	{

		cchar = rl[i];

		lcchar = cchar + 32;

		for(j = 0; j < len; j++)

		{

			p =  &x[j];



			if (*p == cchar || *p == lcchar)

			{

				*(x+j) = rpl[i];

			}

		}

	}
 return (x);
}
