 #include<stdio.h>
 int main()
 {
    int d;
    scanf("%d",&d);
    int years = d/365;
    int weeks = (d % 365)/7;
    printf("%d
", years);
    printf("%d
", weeks);
    return 0;
 }
