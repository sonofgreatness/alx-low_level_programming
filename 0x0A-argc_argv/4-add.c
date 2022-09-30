#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/*returns lenght of  string*/
int/*get length of string*/
_strlen(char *s)

{
const char *cc = (char *) s;
return (strlen(cc));
}

/*tells if string is a	digit*/

int/*checks if string is num*/

iswhollydigit(char *s)

{

	char *p;
	int i;
	int len;
	int rtstring;

	rtstring = 0;
	len = strlen(s);

	while (i < len)

	{

		p = &s[i];
		if (*p >= 48 && *p <= 57)

		{

			rtstring = 1;

		}

		else

		{

			rtstring = 0;

			i = len;

		}

		i++;
	}
		return (rtstring);

}

int/*entry point of program*/
main(int argc, char *argv[])

{

	/*check if all number are digits as a whole*/
	int checkNum;
	int j;
	int k;/*useful for	last for loop*/
	int sum;

	sum = 0;
	j = 0;

	while (j <= argc)

	{

		if (iswhollydigit(argv[j]) == 1)

		{

			checkNum = 3;

		}

		else

		{

			checkNum = 2;
			j = argc + 1;

		}

		j++;

	}
	/*all numbers are digits if : checkNum = 3;*/
	if (checkNum == 3)
	{

		return (1);
		printf("Error \n");

	}

	else

	{

		/*do the	addition */

		for (k = 1; k < argc; k++)

		{

			sum = sum + atoi(argv[k]);

		}


		printf("%d \n", sum);
		return (0);

	}

}
