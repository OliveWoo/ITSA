#include <stdio.h>
#include <math.h>

int main() {
    double a;

    while (scanf("%lf", &a) != EOF) {

        double result = a * 9.0 / 5.0 + 32;
        printf("%.1f\n", round(result * 10) / 10);
    }

    return 0;
}
