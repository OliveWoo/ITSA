#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n;

    while (cin >> n) {
        double result;
        if (n <= 800) {
            result = n * 0.9;
        } else if (n < 1500) {
            result = n * 0.9 * 0.9;
        } else {
            result = n * 0.9 * 0.79;
        }

        cout << fixed << setprecision(1) << result << endl;
    }

    return 0;
}
