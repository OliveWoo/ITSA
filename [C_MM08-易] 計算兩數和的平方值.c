#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF) {
        int result = (a + b) * (a + b);
        printf("%d\n", result);

    }

    return 0;
}
