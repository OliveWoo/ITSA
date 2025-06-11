#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        long long result = 1;

        while (n > 0) {
            result *= n;
            n--;
        }

        cout << result << endl;
    }

    return 0;
}
