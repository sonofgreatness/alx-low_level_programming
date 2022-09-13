#include<stdio.h>
void/*memois */
jack_bauer(void) 
{
int d;
int i; 
d = 0; 
while (d < 24)
{
	d++;
	i = 0;
	if(d < 10)
	{
		putchar ('0');
		putchar(d +'0'); 
	}
	else if (d >= 10)
	{
		putchar(i);    
	}
	while (i < 60)
	{
		if (i < 10)
		{
			putchar('0');
			putchar(i + '0');  
		}
		else
		{
			putchar(i + '0');   
		}
		putchar('\n');
		i++;   
	}
}
}
