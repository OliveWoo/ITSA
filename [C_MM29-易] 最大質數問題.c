#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N - 1; i > 1; i--) {
        if (is_prime(i)) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
