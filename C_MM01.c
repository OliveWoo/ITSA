#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {

        double result = (a + b) * c / 2;
        printf("Trapezoid area:%.1f\n", result);
    }

    return 0;
}
