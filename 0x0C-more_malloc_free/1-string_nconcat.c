#include<string.h>
#include<stdlib.h>
/*concates strings using malloc*/

char/*definuition*/

* string_nconcat(char *s1, char *s2, unsigned int n)

{



	char *rs;

	unsigned int len1;

	unsigned int len2;

	unsigned int i;

	unsigned int i2;

	unsigned int useful;

	len1 = strlen(s1);

	len2 = strlen(s2);



	if (n >= len2)

	{

		/*use the whole string of s2*/

		if (malloc(sizeof(s1) + sizeof(s2)) == NULL)

		{
			return (NULL);
		}

		else

		{

			/*begin the concatenation process*/



			rs  = malloc(sizeof(s1) + sizeof(s2));

				/*write in s1*/

				for (i = 0; i < len1; i++)

				{

					rs[i] = s1[i];

					useful = i;

				}

			useful++;

			/*write in s2*/

			for (i2 = 0; i2 <= len2; i2++)

			{

				rs[useful + i2] = s2[i2];

			}

		}



		return (rs);

	}

	else

	{

		/*use n characters*/

		if (malloc(sizeof(s1) + n) == NULL)

		{
			return (NULL);
		}



		else

		{

			/*begin concatenation : */

			rs = malloc(sizeof(s1) + n);

			/*write in s1*/

			for (i = 0; i < len1; i++)

			{

				rs[i] = s1[i];

				useful = i;

			}

			useful++;

			/*write in s2*/

			for (i2 = 0; i2 < n; i2++)

			{

				rs[i2 + useful] = s2[i2];

			}

		
			rs[i2 + n] = '\0';

			return (rs);

		}



	}



}
