#include <stdio.h>

int main(void)
{
    int n, v[10], i, s = 0;
    printf("give a number: ");
    scanf("%i", &n);
    printf("give %i numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%i", &v[i]);
        s += v[i];
    }
    printf("the sum is: %i\n", s);
}