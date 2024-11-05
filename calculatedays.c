#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter a date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    // Function to check if the given year is a leap year
    int isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    // Function to calculate the number of days in a month
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        default:
            printf("Invalid month entered.\n");
            return 1; // Exit program
    }

    if (day < 1 || day > daysInMonth) {
        printf("Invalid day entered for month %d.\n", month);
        return 1; // Exit program
    }

    int days = 0;

    // Calculate days for full years
    for (int y = 2024; y < year; y++) {
        days += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;
    }

    // Calculate days for full months in the current year
    for (int m = 1; m < month; m++) {
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days += 31;
                break;
            case 4: case 6: case 9: case 11:
                days += 30;
                break;
            case 2:
                days += isLeapYear ? 29 : 28;
                break;
        }
    }

    // Add days in the current month
    days += day;

    printf("Number of days from January 1, 2024, to %d/%d/%d is: %d days.\n", day, month, year, days);

    return 0;
}
