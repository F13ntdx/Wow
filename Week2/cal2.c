//dumped cause need more knowlage to do in c

#include <cs50.h>
#include <stdio.h>

char question();
int nq();
void repq();
float div(int num[]);
int pll(int num[], int tmm);
int mn(int num[]);

int main(void)
{
char ans = question();
int tm = nq();
int nums[tm];
int wnums[] = nums[tm];

if (ans == '+' || ans == '*' )
{
   int res;
   &wnums[tm] = pll(&nums[tm], tm);
   printf("the answer is: ");
   while (tm - 1 > 0)
   {

        res = (nums[tm] + nums[tm]);
        tm --;
   }
   printf("%i", res);
}
else if (ans == '-')
{

}
else if (ans == '/')
{

}

}


//FUNCTIONS//

float div(int num[])
{
return 1.0;
}

int pll(int num[], int tmm)
{
    int nums = tmm;
    int sw = 0;
    do
    {
        num[nums-1] = get_int("Enter number %i\n", nums - 1);
        nums --;
        sw ++;
    }
    while (sw < tmm - 1);
    return num[tmm - 1];
}

int mn(int num[])
{
return 1;
}

char question()
{
    char ans = get_char("What type of math do u want to do? (*,/,+,-): ");
    if (ans == '*' || ans == '-' || ans == '+' || ans == '/')
    {
        if (ans == '*' )
        {
            return '*';
        }
        else if (ans == '-')
        {
            return '-';
        }
        else if (ans == '+')
        {
            return '+';
        }
        else
        {
            return '/';
        }
    }
    else
    {
        return 'y';
        question();
    }
}

int nq()
{
char d = get_char("Do u want to do inbetween math? exp:(x+x+x) ");
int times;
    if (d == 'y' || d == 'Y' || d == 'n' || d == 'N')
    {
        if (d == 'y' || d == 'Y')
        {
            do
            {
                times = get_int("Then enter how many of it you want: ");
            }
            while (times < 0);
            return times + 1;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        nq();
        return 0;
    }
}
