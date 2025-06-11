#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;
    int sum = 0;

    while (N > 0) {
        int digit = N % 10;
        sum += digit * digit * digit;
        N /= 10;
    }

    if (sum == original) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
