#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double area = (a * b) / 2.0;
    printf("%.1f\n", area);
    return 0;
}
