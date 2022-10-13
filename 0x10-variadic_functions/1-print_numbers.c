#include<stdio.h>
#include<stdarg.h>
/*printnumbers*/
void
/*functiondefinition*/
print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int print;
va_list list;

va_start(list, n);
for (i = 0; i < n - 1; i++)
{
print = va_arg(list, int);
if (separator == NULL)
{
printf("%d", print);
}
else
{
printf("%d%c ", print, *separator);
}
va_end(list);
}
print = va_arg(list, int);
printf("%d", print);
printf("\n");
}
