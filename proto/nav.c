#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int y;
    int x;
}
nav;

nav data;
void fnav();
char des();

int main(void)
{
data.x = 2;
data.y = 2;
while (true)
{
    fnav();
}
}

void fnav()
{
    char ans;
    int grid = 6;
    int y = 0;
    while (y < grid)
    {
        int i = 0;
        if (data.y == y)
        {
            while (i < grid)
            {
                if (data.x == i)
                {
                   printf(" . ");
                   i ++;
                }
            i ++;
            printf("   ");
            }
        }
        else
        {
            while (i < grid)
            {
            i ++;
            printf("   ");
            }
        }
        printf("\n");
        y ++;
    }
    ans = des();
    if (ans == 'd' || ans == 'D')
    {
        data.x ++;
        if (data.x > (grid - 2))
        {
            data.x = (grid - 2);
        }
    }
    else if (ans == 's' || ans == 'S')
    {
        data.y ++;
        if (data.y > (grid - 2))
        {
            data.y = (grid - 2);
        }
    }
    else if (ans == 'w' || ans == 'W')
    {
        data.y --;
        if (data.y < 0)
        {
            data.y = 0;
        }
    }
    else
    {
        data.x --;
        if (data.x < 0)
        {
            data.x = 0;
        }
    }
}

char des()
{
    char ans;
    do
    ans = get_char("Move (w,a,s,d)");
    while (ans != 'w' && ans != 'W' && ans != 'a' && ans != 'A' && ans != 's' && ans != 'S' && ans != 'd' && ans != 'D');
    return ans;
}
