#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            // 將 a, b, c 排序，使 c 為最大邊
            if (a > b) swap(a, b);
            if (b > c) swap(b, c);
            if (a > b) swap(a, b);

            if (a * a + b * b == c * c) {
                cout << "Right Triangle" << endl;
            } else if (a * a + b * b < c * c) {
                cout << "Obtuse Triangle" << endl;
            } else {
                cout << "Acute Triangle" << endl;
            }
        } else {
            cout << "Not Triangle" << endl;
        }
    }

    return 0;
}
