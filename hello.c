#include <cs50.h>
#include <stdio.h>



int main(void)
{
    string sanswer = get_string("What is your name fella? ") ;
    printf("hello, %s\n", sanswer);
    printf("and ur age please\n");
    int answer = get_int("What is your age fella ") ;
    if (answer > 18 )
    {
    printf("hello, %s\n", sanswer);
    printf("with the age of, %i\n", answer);
    printf("u are quiet odd");
    }
    else if (answer <18)
    {
    printf("hello, %s\n", sanswer);
    printf("with the age of, %i\n", answer);
    printf("just how i like it\n");
    }
    else
    {
    printf("hello, %s\n", sanswer);
    printf("with the age of, %i\n", answer);
    }
}
