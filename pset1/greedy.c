#include <cs50.h>
#include <stdio.h>

void quarter();
void dime();
void nickel();
void penny();

int q = 0;
int d = 0;
int n = 0;
int p = 0;
int idollar;

int main(void)
{

    float fdollar;

    fdollar = get_float();
    idollar = fdollar * 100;

    quarter();
    dime();
    nickel();
    penny();
    printf("%i\n", q + d + n + p);
}

void quarter()
{
    do
    {
        if (idollar >= 25)
        {
            idollar = idollar - 25;
            q++;
        }
    }
    while (idollar >= 25);
}

void dime()
{
    do
    {
        if (idollar >= 10)
        {
            idollar = idollar - 10;
            d++;
        }
    }
    while (idollar >= 10);
}

void nickel()
{
    do
    {
        if (idollar >= 5)
        {
            idollar = idollar - 5;
            n++;
        }
    }
    while (idollar >= 5);
}

void penny()
{
    do
    {
        if (idollar >= 1)
        {
            idollar = idollar - 1;
            p++;
        }
    }
    while (idollar >= 1);
}