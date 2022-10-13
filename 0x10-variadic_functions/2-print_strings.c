#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
/*prints strings passed as variables*/
void
/*function definition*/
print_strings(const char *separator, const unsigned int n, ...)
{
	char *print;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{       print = va_arg(list, char *);

		if (print == NULL)
		{
			if (separator == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("nil%c ", *separator);
			}
			va_end(list);
		}
		else
		{
			if (separator == NULL)
			{
				printf("%s", print);
			}
			else
			{
				printf("%s%c ", print, *separator);
			}
			va_end(list);
		}


	}

	printf("%s", va_arg(list, char *));
	printf("\n");

}

