#include <iostream>

using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
        if (i != 1) {
            cout << " + ";
        }
        cout << i;
    }

    cout << " = " << sum << endl;

    return 0;
}
