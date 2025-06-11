#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a;

    while (cin >> a) {
        double result = a * 9.0 / 5.0 + 32;
        cout << fixed << setprecision(1) << round(result * 10) / 10 << endl;
    }

    return 0;
}
