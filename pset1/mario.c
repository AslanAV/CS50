#include <stdio.h>
#include <cs50.h>

void GetHashs(int i);
void GetSpaces(int h, int i);
int GetHeight(void);

int main(void)
{
    int height;
    height = GetHeight();
    for(int i = 1; i <= height; i++)
    {
        GetSpaces(height, i);
        GetHashs(i);
        printf("\n");
    }
}

void GetHashs(int counter)
{
    //printf("#");
    for (int i = 1; i <= counter; i++)
    {
        printf("#");
    }
}

void GetSpaces(int h, int j)
{
    int counter;
    counter = h - j;
    for (int i = 1; i <= counter; i++)
    {
        printf(" ");
    }
}

int GetHeight(void)
{
    int h;
    h = get_int("Height: ");
    while (h < 1 || h > 8) {
        h = get_int("Height: ");
    }
    return h;
}
