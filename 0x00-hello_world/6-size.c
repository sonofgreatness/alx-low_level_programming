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



	fprintf(stderr,"Size of a char: %zu byte(s)\n", sizeof(charType));

	fprintf(stderr,"Size of an int: %zu byte(s)\n", sizeof(intType));

        fprintf(stderr,"Size of a long int: %zu byte(s)\n", sizeof(shortType));

	fprintf(stderr,"Size of a long long int: %zu byte(s)\n", sizeof(longType));

	fprintf(stderr,"Size of a  float: %zu byte(s)\n", sizeof(floatType));

	return (0);

}
