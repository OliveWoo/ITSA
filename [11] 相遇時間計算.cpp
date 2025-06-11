#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    while (cin >> a) {
        double result = a / 0.238;
        cout << static_cast<int>(ceil(result)) << endl;
    }

    return 0;
}
