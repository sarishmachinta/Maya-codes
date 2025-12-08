#include <stdio.h>

int main() {
    int N, M, total;

    // Input number of 5-seater and 7-seater cars
    scanf("%d %d", &N, &M);

    // Calculate total capacity
    total = N * 5 + M * 7;

    // Output the result
    printf("%d
", total);

    return 0;
}

