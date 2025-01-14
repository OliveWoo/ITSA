#include <stdio.h>

int f91(int n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    } else {
        return n - 10;
    }
}

int main() {
    int k;
    scanf("%d", &k);

    int n;
    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        printf("%d\n", f91(n));
    }

    return 0;
}
