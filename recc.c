#include <stdio.h>
void same_sign(int a, int b);
int max(int a, int b);
int min(int a, int b);

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%i%i", &a, &b);
    if (a == b)
    {
        printf("the numbers are equal");
    }
    else
    {
        same_sign(a, b);
        printf("the max is : %i\n", max(a, b));
        printf("the min is : %i\n", min(a, b));
    }
}

void same_sign(int a, int b)
{
    int s;
    s = a * b;
    if (s >= 0)
    {
        printf("they have the same sign\n");
    }
    else
    {
        printf("they haven't the same sign\n");
    }
}
int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}