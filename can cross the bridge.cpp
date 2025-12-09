#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d", &X, &Y, &Z);
    int remaining = Z - Y;
    int max_mangoes = remaining / X;
    printf("%d", max_mangoes);
    return 0;
}
