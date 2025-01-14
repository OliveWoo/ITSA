#include <stdio.h>

int main() {
    int N, M;
    int count = 0;
    char strN[3], strM[8];

    scanf("%d %d", &N, &M);

    // 將 N 和 M 轉換為字串
    sprintf(strN, "%d", N);
    sprintf(strM, "%d", M);

    // 在 M 中查找 N 的出現次數
    for (int i = 0; strM[i] != '\0'; i++) {
        if (strM[i] == strN[0]) {
            if (strM[i + 1] == strN[1]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
