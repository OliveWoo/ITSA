#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int sum = 0;

    while (N > 0) {
        int digit = N % 10;
        sum += digit * digit * digit;
        N /= 10;
    }

    if (sum == original) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
