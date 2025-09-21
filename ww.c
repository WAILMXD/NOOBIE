#include <stdio.h>

int main(void)
{
    char name[1];
    printf("Hi! what's your name?\n");
    scanf("%s", &name);
    printf("welcome %s with us \n", name);
}