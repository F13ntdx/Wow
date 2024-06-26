// BIGGGGGEEEEESSSSTT CODE I HAVE EVER WROTE TILL NOW
#include <stdio.h>
#include <cs50.h>

int contactc();
char question();         //declaring needed functions
void cont(int countt);

int main(void)
{
    int count;
    char answer;
    string name = get_string("Enter your name please: ");
    string sname = get_string("And your Surname please: ");
    answer = question(); //asks if they want to add contacts with a y/n question
    while (answer == 'h')
    {
        answer = question(); //if their answer is different than y or n it asks the question again until it is \\ i could have done it with do but i couldn't figure out how i would do that so i went with this instead
            //i could have done it with a do loop but i couldn't figure out how i would do that so i went with this instead
    }
    if (answer == 'y')
    {
        count = contactc(); //if person said yes it asks them to enter how many contacts the want to add
        cont(count); // then it takes their answer and ask them to enter names that many times while also printing out the names they wrote each time
    }
    else
    {
        printf("Hello, %s %s\n", name, sname); //if they said no to the question they are met with their own name and surname
    }
}

int contactc()
{
    int count;
    do
    {
        count = get_int("How many contacts do u want to add: ");  // if their answer to how many they want to add is smaller than 1 it reruns the same question
    }
    while (count < 1);
    return count;
}

char question()
{
    char answer;
answer = get_char("Want to add contacts? y/n ");
    if (answer == 'y' || answer == 'n' || answer == 'Y' || answer == 'N')
    {
        if (answer == 'y' || answer == 'Y')
        {
            return 'y';
        }
        else
        {
            return 'n';
        }
    }
    else
    {
        return 'h'; //if their answer is anything other than y or n it just sets the varible for the while loop to ask again
    }
}

void cont(int countt)
{
    while (countt > 0)
        {
            string contactn;
            contactn = get_string("Enter name of the %i", countt);
            printf("%i %s\n", countt, contactn );
            countt --;
        }
}
