//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.

#include <stdio.h>

void findLeapYears(int startYear, int endYear, int leapYears[], int *numLeapYears) {
    int count = 0;
    for (int year = startYear; year <= endYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[count++] = year;
        }
    }
    *numLeapYears = count;
}

int main() {
    int startYear, endYear;
    printf("Enter the start year: ");
    scanf("%d", &startYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    int leapYears[100]; // Assuming a maximum of 100 leap years
    int numLeapYears;

    findLeapYears(startYear, endYear, leapYears, &numLeapYears);

    printf("Leap years between %d and %d are:\n", startYear, endYear);
    for (int i = 0; i < numLeapYears; i++) {
        printf("%d\n", leapYears[i]);
    }

    return 0;
}