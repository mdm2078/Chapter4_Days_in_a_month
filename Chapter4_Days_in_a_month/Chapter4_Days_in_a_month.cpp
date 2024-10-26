// Chapter4_Days_in_a_month.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int month, year;

	// Ask for month and year input
	cout << "Enter a month (1-12):";
	cin >> month;
	cout << "Enter a year:";
	cin >> year;

	int days = 0;

	// Check if it's a leap year
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	// Determine the number of days in the month
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = isLeapYear ? 29 : 28;
		break;
	default:
		cout << "Invalid month entered." << endl;
		return 1;
	}

	// Display the result
	cout << days << "days" << endl;

	return 0;

}
