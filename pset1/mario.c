#include <cs50.h>
#include <stdio.h>

void spaces(int n);
void tag(int n);

int main(void)
{
    int height;
    do
    {
        height = get_int();
        if (23 >= height && height >=0)
        {
            for (int i = 0; i < height; i++)
            {
            spaces(height - 1 - i);
            tag(i + 2);
            printf("\n");
            }
        }
    }
    while (height < 0 || height >23);
}

void spaces(int n)
{
    for (int i = 0; i < n; i++)
    printf(" ");
}
void tag(int n)
{
    for (int i = 0; i < n; i++)
    printf("#");
}