#include <stdio.h>

int main() {
    double n;

    while(scanf("%lf", &n) != EOF) {

        double result;
        if(n <= 800) {
            result = n * 0.9;

        } else if(n < 1500) {
            result = n * 0.9 * 0.9;

        } else {
            result = n * 0.9 * 0.79;
        }

    printf("%.1f\n", result);
    }
    
    return 0;
}
