#include "main.h"
/**TELL THE ENDIANESS OF A SYSTEM**/
/*return 0 big endian ,1 for little endian*/
int
/*function definition*/
get_endianness(void)
{
/*Difinitions*/
/*
* A big-endian system stores the most significant
* byte of a word at the smallest memory address
* and the least significant byte at the largest.
*/

int x = 1;
char *y = (char *)&x;
/*1st memory address will have nothing bi endian in */

if (*y + '0' == '0')
	return (0);

else
	return (1);

}
