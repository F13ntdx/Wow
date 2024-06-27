#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do u agr?\n");
    if (c == 'y' || c == 'Y')
    {
        printf("you agreed now\n");
    }
        else if (c == 'n' || c == 'C')
        {
            printf("you did not agree yes\n");
        }
            else
            {
                printf("stop joking around\n");
            }
}
