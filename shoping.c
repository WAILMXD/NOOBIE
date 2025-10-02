#include <stdio.h>
#include <string.h>

int main()
{
    char item[50];
    int n;
    float p;

    printf("what do you want to buy ?  ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("what's its price?  ");
    scanf("%f", &p);

    printf("how many %s do you want to take? ", item);
    scanf("%d", &n);

    printf("you took %d %s\n", n, item);
    printf("totale price : %.2f\n", p * n);

    return 0;
}