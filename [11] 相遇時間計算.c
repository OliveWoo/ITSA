#include <stdio.h>
#include <math.h>

int main() {
    int a;
    while(scanf("%d", &a) != EOF) {

        double result = a / 0.238;
        printf("%d\n", (int)ceil(result));
    }

    return 0;
}
