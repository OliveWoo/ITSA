#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        n += 256;
    }

    int binary[8] = {0};
    for (int i = 7; i >= 0; i--) {
        binary[i] = n % 2;
        n /= 2;
    }

    for (int i = 0; i < 8; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
