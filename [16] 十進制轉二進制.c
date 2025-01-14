#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        n += 256;
    }

    int binary[8] = {0};
    for (int i = 7; i >= 0; i--) {
        binary[i] = n % 2;
        n /= 2;
    }

    for (int i = 0; i < 8; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
