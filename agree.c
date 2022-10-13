#include <stdio.h>
#include <cs50.h>

int main(void)
{
 //prompt user agree

 char c = get_char("do you agree? " );

//check

if (c == 'y' || c=='Y')
{
    printf("Agreed\n");
}
else if(c == 'n' || c=='N')
{
    printf("Not agreed\n");
}
else
{
    printf("wrong input\n");
}
}
