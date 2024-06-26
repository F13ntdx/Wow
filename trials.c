#include <cs50.h>
#include <stdio.h>

int gayosmn(int tr);

int main(void)
{

int trr = get_int("1 yada 0 lan trrrrek\n");
int sayi1 = gayosmn(trr);
if (sayi1 > 15)
{
    printf("şu kadar 31 çek osman ----> %i", sayi1);
}
else
{
    printf("yarraga bellaaa osman\n");
}
}
int gayosmn(int tr)
{
if (tr == 1)
{
int h = get_int("eşşek osman gir bi sayı koymayım götüne");
return h;
}
else
{
    return -1;
}
}
