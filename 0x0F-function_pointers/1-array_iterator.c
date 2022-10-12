#include<stddef.h>
/*executes a function given as a parameter on each element of an array.*/
void
/*function definition */
array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < (int) size; i++)
{
	action(array[i]);
}

}
