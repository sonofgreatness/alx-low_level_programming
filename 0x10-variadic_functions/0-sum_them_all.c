#include <stdarg.h>
#include<stddef.h>
/*get sum of all args*/
int
/*function definition*/
sum_them_all(const unsigned int n, ...)
{
int sum;
int g;
unsigned int i;
va_list list;

sum = 0;
if (n == 0)
{
	return (0);
}
else
{
va_start(list, n);
for (i = 1; i <= n; i++)
{
g = va_arg(list, int);
sum = sum + g;

}
return (sum);
}

}
