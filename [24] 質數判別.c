#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        if (is_prime(N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
