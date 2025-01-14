#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int num10 = a / 10;
    a %= 10;

    int num5 = a / 5;
    a %= 5;

    int num1 = a;

    printf("NT10=%d\nNT5=%d\nNT1=%d\n", num10, num5, num1);

    return 0;
}
