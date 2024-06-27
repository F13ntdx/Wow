#include <cs50.h>
#include <stdio.h>

void count(int sls);

int main(void)
{
    int why = get_int("Chose a riddle");
    count(why);
}


void count(int sls)
{
    int count = get_int("Choose the count");
    int boool = 1;
    if (count < 0 && sls < 0)
    {
        boool = 0;
    }
        else if (count == 0 && sls == 0)
        {
            boool = 2;
        }
            else
            {
                boool = 1;
                count = count*sls;
            }
                while (boool == 0 && count < 0 )
                {
                    printf("Count: %i\n", count);
                    count++;
                }
                while (boool == 1 && count > 0)
                {
                    printf("Count: %i\n", count);
                    count--;
                }
                    while (boool == 2 && count == 0)
                {
                    printf("Count: %i\n", count);
                    count++;
                }
                    if (boool == 1 && count < 0)
                    {
                        printf("C0un7:  %i\n", count);
                    }
                    if (boool == 1 && count == 0)
                    {
                        printf("C0un7777777777:  %i\n", count);
                    }
}
