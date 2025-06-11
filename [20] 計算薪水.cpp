#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, m;

    while (cin >> n >> m) {
        double result = 0.0;

        if (n <= 60) {
            result = n * m;
        } else if (n <= 120) {
            result = 60 * m + (n - 60) * m * 1.33;
        } else {
            result = 60 * m + 60 * m * 1.33 + (n - 120) * m * 1.66;
        }

        cout << fixed << setprecision(1) << result << endl;
    }

    return 0;
}
