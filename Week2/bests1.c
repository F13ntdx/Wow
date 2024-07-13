#include <cs50.h>
#include <stdio.h>



int times = 0;
bool perm;
char *llist[4];
llist[0] = "Namer";
llist[1] = "keyn";
llist[2] = "Wala";
llist[3] = "???";

string enter_name();
char ynq();
void permin(string name);

int main(void)
{
    string rname = enter_name();
    permin(rname);
}

char ynq()
{
    char ans;
    ans = get_char("\n");
    if (ans == 'y' || 'Y')
    {
        return 'y';
    }
    else if ('n' || "N")
    {
        return 'n';
    }
    else
    {
        return 'm';
    }
}

string enter_name()
{
    string name = get_string("Adınız Lütfen: ");
    if (name == "Selman")
    {
        printf("All access granted to you sir.\n");
        perm = true;
        return name;
    }
    else
    {
        perm = false;
        return name;
    }
}

void permin(string name)
{

    if (times = 0)
    {
        printf("Merhaba %s", name);
        times ++;
    }
    printf("Listeyi Silmek istermisin? (y/N): ");
    char yans = ynq();
    if (yans == 'y')
    {
        if (perm == 1)
        {
            printf("Eminmisin? (sadece y evet demek)");
            char cans = ynq();
            if (cans == 'y')
            {
                llist[0] = "nil";
                llist[1] = "nil";
                llist[2] = "nil";
                llist[3] = "nil";
            }
            else
            {
                printf("Peki\n");
            }
        }
        else
        {
            printf("Sen daha yönetici değilsin be adam");
        }
     }
     else if (yans == 'n')
     {
        printf("peki devam ediliyor\n");
     }
     else
     {
        permin(name);
     }
}



