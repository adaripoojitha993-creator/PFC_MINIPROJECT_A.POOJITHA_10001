#include <stdio.h>
//Name -A.Poojitha
//ERP ID - RU-25-10001
int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d\n", seconds);

    return 0;
}
// Output -
// Enter total seconds: 432455
// Hours = 120
// Minutes = 7
// Seconds = 35