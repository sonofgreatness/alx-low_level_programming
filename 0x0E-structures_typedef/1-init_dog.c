#include "dog.h"
/*initializes dog struct*/
void/*defiition of function*/
init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
(*d).age = age;
d->owner = owner;
}
