/*function to call other dunction*/
void
/*function definition*/
print_name(char *name, void (*f)(char *))
{
f(name);
}
