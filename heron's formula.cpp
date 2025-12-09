#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double s, area;

    // Input three sides
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        area = 0.0;
    }

    // Output area with 4 decimal places
    printf("%.4lf
", area);

    return 0;
}

