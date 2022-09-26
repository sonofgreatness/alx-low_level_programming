#include<stdio.h>                                                                                         
void/*memois */                                                                                           
jack_bauer(void)                                                                                          
{                                                                                                         
	int d;                                                                                                    
	int i;                                                                                                    
	for(d = 0; d < 24; d++)                                                                                       
	{                                                                                                         
		                                                                                                          
		for(i = 0; i < 60; i++)                                                                                  
		{                                                                                                 
			              
			if(d < 10)                                                                                        
			{                                                                                                 
				putchar ('0');                                                                            
				putchar(d + '0');                                                                         
			}                                                                                                 
			else if (d >= 10)                                                                                 
			{                                                                                                 
				putchar(d + '0');                                                                         
				                                                                                                          
			}                                                                                                 
			putchar(':');  
			              
			if (i <= 9)                                                                               
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
		d++;                                                                                              
	}                                                                                                         
} 
