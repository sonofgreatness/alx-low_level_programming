#include "dog.h"
/*returns a dog_t variable initialized*/
dog_t
/*function definition*/
*new_dog(char *name, float age, char *owner)
{

	char *cname;
	char *cowner;
	dog_t dog;
	dog_t *ptr;

	cname = name;
	cowner = owner;


	dog.name = cname;
	dog.owner = cowner;
	dog.age = age;
	ptr = &dog;


	return (ptr);

}
