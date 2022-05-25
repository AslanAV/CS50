#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string getName(void);
void printUpperChar(char);

int main(void)
{
    string s;
    s = getName();

    char firstChar = s[0];
    printUpperChar(firstChar);

    int len;
    len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ') {
            printUpperChar(s[i + 1]);
        }
    }
    printf("\n");
}

void printUpperChar(char c)
{
    if (c > 90) {
        printf("%c", c - 32);
    } else {
        printf("%c", c);
    }
}

string getName(void)
{
    string s;

    s = get_string("Name: ");
    return s;
}
