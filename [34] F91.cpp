#include <iostream>

using namespace std;

int f91(int n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    } else {
        return n - 10;
    }
}

int main() {
    int k;
    cin >> k;

    int n;
    for (int i = 0; i < k; i++) {
        cin >> n;
        cout << f91(n) << endl;
    }

    return 0;
}
