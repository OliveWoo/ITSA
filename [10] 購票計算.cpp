#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int num10 = a / 10;
    a %= 10;

    int num5 = a / 5;
    a %= 5;

    int num1 = a;

    cout << "NT10=" << num10 << endl;
    cout << "NT5=" << num5 << endl;
    cout << "NT1=" << num1 << endl;

    return 0;
}
