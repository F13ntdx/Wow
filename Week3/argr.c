#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct
{
    string name;
    string number;
}
person;

void cont();
int dec();

int main(void)
{

    cont();
}

int dec()
{
    int ans = get_int("how many people do u want inside your contacts: ");
    if (ans < 1)
    {
        return 0;
    }
    else
    {
        return ans;
    }
}

void cont()
{
    person people[0];
    int ans;
    ans = dec();
    int ansh = ans;
    if (ans == 0)
    {
        printf("Bye\n");
    }
    else
    {
        while (ans > 0)
        {
            printf("Give the %i", ans);
            people[ans - 1].name = get_string(" person's name: ");
            printf("Give the %i", ans);
            people[ans - 1].number = get_string(" person's number: ");
            ans = ans - 1;
        }
        int n = 0;
        printf("%i\n\n\n" , ansh);
        while (n < ansh)
        {
            n ++;
            printf("Person %i", (n));
            printf(": %s\n", people[n - 1].name);
            printf("Number ");
            printf(": %s\n\n", people[n - 1].number);
        }
        printf("All done");
    }
}
