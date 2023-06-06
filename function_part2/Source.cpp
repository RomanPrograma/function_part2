#include <iostream>
#include <cstdlib>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}


int getDaysDifference(int day1, int month1, int year1, int day2, int month2, int year2) {

    int daysInMonth[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year1)) {
        daysInMonth[1] = 29;
    }

    int totalDays1 = year1 * 365 + day1;
    for (int i = 0; i < month1 - 1; ++i) {
        totalDays1 += daysInMonth[i];
    }
    totalDays1 += year1 / 4 - year1 / 100 + year1 / 400;

    int totalDays2 = year2 * 365 + day2;
    for (int i = 0; i < month2 - 1; ++i) {
        totalDays2 += daysInMonth[i];
    }
    totalDays2 += year2 / 4 - year2 / 100 + year2 / 400;

    int difference = totalDays2 - totalDays1;

    return difference;
}

int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Enter first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int difference = getDaysDifference(day1, month1, year1, day2, month2, year2);

    cout << "Difference in days: " << difference << endl;

    system("pause>nul");
    return 0;
}