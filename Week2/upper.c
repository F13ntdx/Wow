#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Input: ");
    int i = 0;
    int n = strlen(s);
    while (i < n)
    {
        printf("%c", toupper(s[i]));
        i ++;
    }
    printf("\n");
}
