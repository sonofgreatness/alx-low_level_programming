#include "main.h"



/**
 *
 *	* largest_number - returns the largest of 3 numbers
 *
 *	 * @a: first integer
 *
 *		* @b: second integer
 *
 *		 * @c: third integer
 *
 *			* Return: largest number
 *
 *			 */



int largest_number(int a, int b, int c)

{

	int largest;



	if (a > b)

	{

		if (a > c)

		{

			largest = a;

		}

		largest = c;



	}

	else if (b > a)

	{

		if (b > c)

		{

			largest = b;

		}

		largest = c;

	}

	else

	{

		if(c > a)

		{

			largest = c;

		}

		largest = a;

	}



	return (largest);

}

