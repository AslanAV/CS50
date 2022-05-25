#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string getName(void);
void getFirstChar(string);

int main(void)
{
    int i, c;
    string name;
    name = getName();
    getFirstChar(name);
    return 0;
}

string getName(void)
{
    string name;
    name = get_string("you name: ");
    return name;
}

void getFirstChar(string name)
{
    int len, i;
    len = strlen(name);

    printf("%c", toupper(name[0]));
    for (i = 0; i < len; i++)
    {
        if (name[i] == ' ') {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}