#include <stdio.h>

int main() {
    int n;

    while(scanf("%d", &n) != EOF) { 

        long long int result = 1;

        while (n > 0) {
            result *= n;
            n--;
        }

        printf("%lld\n", result);
    }

    return 0;
}
