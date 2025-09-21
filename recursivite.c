#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int n;
    printf("enter a number : \n");
    scanf("%i", &n);
    printf("the result : %d", fibonacci(n));
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}