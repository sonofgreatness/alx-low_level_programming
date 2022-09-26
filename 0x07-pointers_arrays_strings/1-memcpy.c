/*copies one memory */
char/*function definition*/
* _memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	char *p;
	char *t;

for (i = 0; i < n; i++)
{
p = &dest[i];
t = &src[i];
*p = *t;
}
return (p);
}
