#include <cs50.h>
#include <stdio.h>

int main(void)
{
int count = 1;
int ans = 0;
ans = get_int("Give me a number");
if (ans == 1)
{
ans = count + 5;
int whee = ans * count;
printf("woah, %i\n", whee);
}
else
{
printf("yaw hehe\n");
}
}
