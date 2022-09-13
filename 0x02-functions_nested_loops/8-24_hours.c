void jack_bauer(void) 
{
int d;
int i; 
d = 0; 
while (d < 24)
{
	i = 0;
	if(d < 10)
	{
		_putchar ('0');
		_putchar(d); 
	}
	else if (d >= 10)
	{
		_putchar(i);    
	}
	while (i < 60)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i);  
		}
		else
		{
			_putchar(i);   
		}
		i++;   
	}
	d++;
}
}
