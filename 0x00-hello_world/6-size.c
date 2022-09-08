#include<stdio.h>

/*program description*/

int/*main function description */

main(void)

{

	long shortType;

	long long longType;

	int intType;

	float floatType;

	double doubleType;

	char charType;



	printf("Size of a char: %zu byte\n", sizeof(charType));

	printf("Size of an int: %zu bytes\n", sizeof(intType));

	printf("Size of a long int: %zu bytes\n", sizeof(shortType));

	printf("Size of a long long int: %zu bytes\n", sizeof(longType));

	printf("Size of a  float: %zu bytes\n", sizeof(floatType));

	return (0);

}
