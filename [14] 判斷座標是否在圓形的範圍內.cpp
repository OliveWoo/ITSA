#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    while (cin >> x >> y) {
        double result = sqrt(x * x + y * y);

        if (result <= 100) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }

    return 0;
}
