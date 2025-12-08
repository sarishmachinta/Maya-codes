#include <stdio.h>

int main() {
    int height_in_inches;
    double height_in_cm;

    // Read height in inches
    scanf("%d", &height_in_inches);

    // Convert to centimeters (1 inch = 2.54 cm)
    height_in_cm = height_in_inches * 2.54;

    // Print result with 2 decimal places
    printf("%.2lf
", height_in_cm);

    return 0;
}

