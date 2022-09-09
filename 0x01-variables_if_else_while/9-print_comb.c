#include<stdio.h>

/*Program to print ourt all base 16 values */

int /*program entry point*/

main(void)

{

	    int x ;

	    for(x='A';x<='J';x++)/*print 0-9*/



	    {

		    putchar(x%65 +'0');

		    if(x!='J')

		    {



			    putchar(',');



		    }

		     

	    }

	    putchar('\n');

	    return (0); 

}
