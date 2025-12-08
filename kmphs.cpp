#include <stdio.h>

int main() {
    int speed_kmph;
    double speed_mps;

    // Read input speed in km/h
    scanf("%d", &speed_kmph);

    // Convert to m/s using the formula: 1 km/h = 5/18 m/s
    speed_mps = speed_kmph * (5.0 / 18.0);

    printf("%.2lf
", speed_mps);

    return 0;
}

