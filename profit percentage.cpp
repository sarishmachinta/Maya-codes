#include <stdio.h>

int main() {
    double CP, SP, profitPercentage;

    scanf("%lf %lf", &CP, &SP);

    profitPercentage = ((SP - CP) / CP) * 100;

    printf("%.2lf
", profitPercentage);

    return 0;
}

