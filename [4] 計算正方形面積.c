#include <stdio.h>
#include <math.h>

int main() {
    double a;

    while (scanf("%lf", &a) != EOF) {
        
        double area = a * a;
        printf("%.1f\n", round(area * 10) / 10);
    }

    return 0;
}
