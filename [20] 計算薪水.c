#include <stdio.h>

int main() {
    double n, m;

    while(scanf("%lf %lf", &n, &m) != EOF) {

        double result = 0.0;

        if (n <= 60) {
            result = n * m;
        } else if (n <= 120) {
            result = 60 * m + (n - 60) * m * 1.33;
        } else {
            result = 60 * m + 60 * m * 1.33 + (n - 120) * m * 1.66;
        }

        printf("%.1f\n", result);
    }
    
    return 0;
}
