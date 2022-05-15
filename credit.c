#include <cs50.h>
#include <stdio.h>

int getCountLength(long);
int isValidLength(int);
int isValidCard (long);
int getPreSum2(int);
int getNameCard(long);

int main(void)
{
    long card;
    int len;

    card = get_long("Number: ");
    len = getCountLength(card);

    if (isValidLength(len) == 0) {
        printf("INVALID\n");
        return 0;
    }
    if (isValidCard(card) == 0) {
        printf("INVALID\n");
        return 0;
    }
    return getNameCard(card);
}

int getNameCard(long card)
{
    string result = "INVALID\n";
    while (card > 100)
    {
        card = card / 10;
    }
    switch (card)
    {
        case 34:
        case 37:
            result = "AMEX\n";
            break;
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
            result = "MASTERCARD\n";
            break;
    }
    if (card / 10 == 4) {
        result = "VISA\n";
    }
    printf("%s", result);
    return 0;
}

int isValidCard (long card)
{
    int i = 0;
    int count = 0;
    int sum;
    while (card > 0) {
        count++;
        i = card % 10;
        if (count % 2 != 0) {
            sum = sum + i;
        } else {
            sum = sum + getPreSum2(i);
        }
        card = card / 10;
    }
    if (sum % 10 != 0) {
        return 0;
    }
    return 1;
}

int getPreSum2(int i)
{
    int j = 0;
    if (i < 5) {
        return i * 2;
    }
    i = i * 2;
    j = i % 10;
    i = i / 10;
    return i + j;
}

int isValidLength(int len)
{
    if (len != 15 && len != 16 && len != 13) {
        return 0;
    }
    return 1;
}

int getCountLength(long card)
{
    int i = 0;
    while (card > 0)
    {
        card = card / 10;
        i++;
    }
    return i;
}
