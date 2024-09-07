#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year) {
        return 1; // date1 is later
    } else if (date1.year < date2.year) {
        return -1; // date1 is earlier
    } else {
        if (date1.month > date2.month) {
            return 1; // date1 is later
        } else if (date1.month < date2.month) {
            return -1; // date1 is earlier
        } else {
            if (date1.day > date2.day) {
                return 1; // date1 is later
            } else if (date1.day < date2.day) {
                return -1; // date1 is earlier
            } else {
                return 0; // dates are equal
            }
        }
    }
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);

    if (result == 0) {
        printf("The dates are equal.\n");
    } else {
        printf("The dates are not equal.\n");
    }

    return 0;
}