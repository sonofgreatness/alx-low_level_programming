#include<stdio.h>

/*Program */


void/* prints  to z */
print_alphabet(void)

{
int i;
for (i = 'a'; i <= 'z'; i++)

{

putchar(i);

}

putchar('\n');

}

void/*print a -z 10 times */
print_alphabet_x10(void)
{
int i = 10;
while (i >= 1)
{

print_alphabet();
i--;
}
}
