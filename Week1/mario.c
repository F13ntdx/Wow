#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt me bruv (test of my.... i dunno comments? )
    int my = 0;
    int i = 0;
    int count;
    do
    {
        count = get_int("Size: ");
    }
    while (count < 1);

    while (i < count)
    {

        while (my < count)
        {
            printf("#");
            my ++;
        }
        i ++;
        printf("\n");
        my = 0;
    }
}
