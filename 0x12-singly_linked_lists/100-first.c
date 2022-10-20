#include <stdio.h>

/*
 *first function that runs before main 
 *
 */

void __attribute__ ((constructor)) first ()
{
printf("You're beat and yet you must allow"); 
printf(",\nI bore my house on mt back!\n");
}
