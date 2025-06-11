#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    while (cin >> a >> b >> c) {
        double result = (a + b) * c / 2;
        cout << fixed << setprecision(1);
        cout << "Trapezoid area:" << result << endl;
    }

    return 0;
}
