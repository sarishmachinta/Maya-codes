#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double hypotenuse;

    // Read input
    scanf("%d %d", &x, &y);

    // Calculate hypotenuse using Pythagoras theorem
    hypotenuse = sqrt(x * x + y * y);

    // Print result with 2 decimal places
    printf("%.2f
", hypotenuse);

    return 0;
}

