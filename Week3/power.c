#include <stdio.h>
#include <cs50.h>

void gett();
void work();
int chk[0];

int main(void)
{
    gett();
    work();
}

void gett()
{
    int number = get_int("provide a number: ");
    if (number < 0)
    {
        int n = -number * 2;
        number = number + n;
    }
    int power = get_int("provide the power: ");
    if (power < 0)
    {
        int n = -power * 2;
        power = power + n;
    }
    else if (power == 0)
    {
        power = 1;
        number = 1;
    }
    int n = 2;
    while (n > 0)
{
        if (n == 2)
    {
        chk[n - 1] = number;
        n --;
    }
    else if (n == 1)
    {
        chk[n - 1] = power;
        n --;
    }
    else
    {
        n --;
    }
}

}

void work()
{
    int number = chk[1];
    int power = chk[0];
    do
    {
        number = number * chk[1];
        printf("Number power , %i", power);
        printf(" , Number = %i\n", number);
        power --;
    }
    while (power > 0);


}
