//a code that was made when i saw the third week for the first time
//takes a number of people and makes them trade numbers with eachother
//in the end the outcome depends on the power of 2
//try it and find how it works for yourself

#include <stdio.h>
#include <cs50.h>

int num = 1;

int geti();
void work(int ppl);

int main(void)
{
 int ppl = geti();
 work(ppl);
}

int geti()
{
    int people = get_int("Enter the number of people included: ");
    if (people < 0)
    {
        int plh = people;
        people = people + (-plh*2);
        return people;
    }
    else if (people == 0)
    {
        return 2;
    }
    else
    {
        return people;
    }
}

void work(int ppl)
{
     do
    {
        printf("People: %i\n", ppl);
        printf("Num: %i\n\n", num);
        ppl = ppl / 2;
        num = num * 2;
    }
    while (ppl > 0);
}
