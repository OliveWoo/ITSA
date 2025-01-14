#include <stdio.h>

#define SECONDS_PER_MINUTE 60
#define MINUTES_PER_HOUR 60
#define HOURS_PER_DAY 24
#define SECONDS_PER_HOUR (SECONDS_PER_MINUTE * MINUTES_PER_HOUR)
#define SECONDS_PER_DAY (SECONDS_PER_HOUR * HOURS_PER_DAY)

int main() {
    long long seconds;

    scanf("%lld", &seconds);

    int days = seconds / SECONDS_PER_DAY;
    seconds %= SECONDS_PER_DAY;

    int hours = seconds / SECONDS_PER_HOUR;
    seconds %= SECONDS_PER_HOUR;

    int minutes = seconds / SECONDS_PER_MINUTE;
    seconds %= SECONDS_PER_MINUTE;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%lld seconds\n", seconds);

    return 0;
}
