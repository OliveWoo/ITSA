#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
            }
            if (b > c) {
                int temp = b;
                b = c;
                c = temp;
            }
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
            }

            if (a * a + b * b == c * c) {
                printf("Right Triangle\n");
            } else if (a * a + b * b < c * c) {
                printf("Obtuse Triangle\n");
            } else {
                printf("Acute Triangle\n");
            }
        } else {
            printf("Not Triangle\n");
        }
    }

    return 0;
}
