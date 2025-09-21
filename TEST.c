#include <stdio.h>
int main(void)
{
    int x, y, n = 1;
    printf("enter the numbers: \n");
    scanf("%i%i", &x, &y);
    for (int i = 0; i < y; i++)
    {
        n = n * x;
    }
    printf("%i power %i = %i\n", x, y, n);
}
