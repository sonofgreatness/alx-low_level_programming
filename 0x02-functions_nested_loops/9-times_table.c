#include<stdio.h>

#include<math.h>

void/*prints times 9 table */                                                                                  

times_table(void){

	    int i;                                                                                                       

	            int j;

		            int ele;                                                                                               

			    int sz;                                                                                                         

			    for(i = 0; i <= 9; i++)                                                                                                              

			    {                                                                                                      

				    for(j = 0 ; j <= 9; j++)                                                                       

				    {                                                                                              

					    ele = i*j;

					    sz = getNumsize(ele);

					    char c[size];

					    c = maker(ele);

					    for (int f = 0; f < sz ; f++) 

					    {                                                                                                                                                      

						    putchar(c[i] +'0');                                                                            

						    putchar(',');                                                                          

						    putchar(' '); 

					    }

				    }                                                                                              

				    putchar('\n');                                                                                                             

			    }

}                                                                                                      

                                                                                                               

int/*returns length of num*/

 getNumsize(int n)

{

	int temp;

	int length;

	int tempM;

	int size;  

	if (n == 0) {

		  length = 1;

	} else {    

		  length = log10(fabs(num)) + 1;

		    if (num < 0) length++;

	}

	return (length); 

}

int

/*returns digit at index*/ 

getNumberatPos(pos, nm)

{

	int size = getNumsize(nm); 

	if (size == 1 || pos == size)

	{

		return (nm % 10);     

	}

	else if (pos < size)

	{

		 temp = 10^(pos-1);

		  tempM = nm / temp; 

		   return (tempM % 10); 

	}

}

char[] maker (int x )

{

	int size = getNumsize(x); 

	char ch[size]; 

	for(i = 0; i < size; i++)

	{

		ch[i]=getNumberatPos(i);     

	}

	return (ch) ; 

}


