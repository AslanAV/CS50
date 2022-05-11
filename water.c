#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int min = get_int("how min: ");
    printf("bottles: %i\n", min * 12);
}
