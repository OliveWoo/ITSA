#include <iostream>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE * MINUTES_PER_HOUR;
const int SECONDS_PER_DAY = SECONDS_PER_HOUR * HOURS_PER_DAY;

int main() {
    long long seconds;
    cin >> seconds;

    int days = seconds / SECONDS_PER_DAY;
    seconds %= SECONDS_PER_DAY;

    int hours = seconds / SECONDS_PER_HOUR;
    seconds %= SECONDS_PER_HOUR;

    int minutes = seconds / SECONDS_PER_MINUTE;
    seconds %= SECONDS_PER_MINUTE;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
