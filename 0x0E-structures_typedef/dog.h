#ifndef DOG_H
#define DOG_H
/*hold particulars of a dog*/
struct
dog
/*record wit 3 fields*/
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
