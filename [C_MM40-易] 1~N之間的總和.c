#include <stdio.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
        if (i != 1) {
            printf(" + ");
        }
        printf("%d", i);
    }
    
    printf(" = %d\n", sum);

    return 0;
}
