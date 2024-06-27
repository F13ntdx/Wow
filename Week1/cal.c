#include <cs50.h>
#include <stdio.h>

int dec();
int numbers(int tp);

int main(void)
{
int type = dec();
printf("%i\n", numbers(type));
}

int dec()
{
    int answer1 = get_char("what type of math (+,-,*)\n");
    if (answer1 == '+')
    {
        return 1;
    }
        else if (answer1 == '-')
        {
            return 2;
        }
            else if (answer1 == '*')
            {
                return 3;
            }
            else
            {
                return 0;
            }
}


int numbers(int tp)
{
    int x = get_int("first number:\n");
    int y = get_int("second number:\n");

        if (tp == 1)
        {
            return x+y;
        }
            else if (tp == 2)
            {
                return x-y;
            }
                else if (tp == 3)
                {
                    return x*y;
                }
                else
                {
                    printf("no\n");
                    return x;
                }
}
