//YAAAAAY I DID IT ITS ARRAYS WITH CONTACTS

#include <cs50.h>
#include <stdio.h>

void question(int dec);
int declarate();
void writend(int dec);




int main(void)
{
    int dec = 0;
    question(dec);
}

int declarate()
{
                int nm;
                do
                {
                    nm = get_int("Then enter how many people you want in your contacts list: ");
                }
                while (nm < 1);
                return nm;

}

void writend(int dec)
{
    int n = dec;
    string names[dec];
    while (dec > 0)
    {
        names[dec - 1] = get_string("write the name of : %i", dec);
        dec --;
    }
    while (-n < 0)
    {
        printf("%i %s\n", n, names[n - 1]);
        n --;
    }
}

void question(int dec)
{
    char n = get_char("Do u want to have a contact list y/n: ");
    if (n == 'y' || n == 'Y' || n == 'n' || n == 'N')
    {
        if (n == 'y' || n == 'Y')
            {
                dec = declarate();
                writend(dec);
            }
            else
            {
                printf("oh man :(\n");
            }
    }
    else
    {
        question(dec);
    }
}

