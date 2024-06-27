#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 5;
    char y = get_char("Do you want to change the count? y/n\n");
    if (y == 'y' || y == 'Y')
    {
        count = get_int("then enter a number\n");
    }
        else if (y == 'n' || y == 'N')
            {
               printf("Alright.\n");
            }




    if (count < 0 || count == 0)
    {
        printf("Sorry count has been changed back to 5\n");
        count = 5;
    }
                while (count > 0 )
        {
            printf("count: %i\n", count);
            count --;
        }




    char n = get_char("Chaos? y/n\n");
                if (n == 'y' || n == 'Y')
                {
                    printf("MUHAHAHAHA\n");
                }
                    else if (n == 'n' || n == 'N')
                    {
                        printf("aww\n");
                    }
                while (n == 'y' || n == 'Y')
    {
        printf("count: %i\n", count);
        count ++;
    }
}
