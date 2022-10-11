#include "dog.h"
#include <stdio.h>
#include<stdlib.h>
/*memory clean up*/
void
/*function definition*/
free_dog(dog_t *d)
{
dog_t *ptr;
ptr = malloc(sizeof(*d));
free(ptr);
}
