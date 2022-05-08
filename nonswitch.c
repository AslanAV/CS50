#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Give me an integer between 1 and 10.\n");

    if (n >= 1 && n <= 3)
    {
        printf("You picked a small number.\n");
    }
    else if (n >= 4 && n <= 6)
    {
        printf("YOu picked a medium number. \n");
    }
    else if (n >= 7 && n <=10)
    {
        printf("You picked a hard number. \n");
    }
    else
    {
        printf("You picked an invalid number.\n");
    }
}