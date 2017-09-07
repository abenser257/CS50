#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes:");
    int minunts = get_int();
    printf("Bottles:%i\n", minunts*12);
}