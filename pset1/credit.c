#include <cs50.h>
#include <stdio.h>

int j = 0;
int k = 0;
long long l;
long long m;

void Amex();
void MasterCard();
void Visa();

int main(void)
{
    l = get_long_long();
    m = l;
    do
    {
        int i;
        i = l % 10;
        j = j + i;
        l = (l - i) / 10;

        i = l % 10;
        int p;
        if (i >= 5)
        {
            p = i * 2 % 10 + 1;
        }
        else
        {
            p = i * 2;
        }

        k = k + p;
        l = (l - i) / 10;
    }
    while (l > 0);

    if ((j + k) % 10 == 0)
    {
        Amex();
        MasterCard();
        Visa();
    }
    else
    {
        printf("INVALID\n");
    }
}

void Amex()
{
    int n = (m / 1000000000000);
    if(n >= 340 && n < 360)
    {
        printf("Amex\n");
    }

    if(n >= 370 && n < 380)
    {
        printf("Amex\n");
    }
}

void MasterCard()
{
    int n = (m / 10000000000000);
    if(n >= 510 && n  < 560)
    {
        printf("MasterCard\n");
    }
}

void Visa()
{
    int n = (m / 100000000000);
    if(n >= 40 && n < 50)
    {
        printf("Visa\n");
    }

    int o = (m / 100000000000000);
    if(o >= 40 && o < 50)
    {
        printf("Visa\n");
    }
}