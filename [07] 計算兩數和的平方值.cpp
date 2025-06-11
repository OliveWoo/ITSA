#include <iostream>

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        int result = (a + b) * (a + b);
        cout << result << endl;
    }

    return 0;
}
