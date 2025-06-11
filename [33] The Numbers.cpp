#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string strN = to_string(N);
    string strM = to_string(M);

    int count = 0;
    for (size_t i = 0; i + strN.length() <= strM.length(); i++) {
        if (strM.substr(i, strN.length()) == strN) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
