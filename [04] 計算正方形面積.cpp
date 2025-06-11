#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a;

    while (cin >> a) {
        double area = a * a;
        // 四捨五入到小數點後第一位
        cout << fixed << setprecision(1) << round(area * 10) / 10 << endl;
    }

    return 0;
}
