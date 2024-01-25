#include<iostream>
using namespace std;
int main() {
	int day;
	int month;
	int year;
	cout << "Enter the day : ";
	cin >> day;
	if (day > 31 || day < 1) {
		cout << "Error!" << endl;
		day = 0;
	}
	cout << "Enter the month : ";
	cin >> month;
	if (month > 12 || month < 1) {
		cout << "Error!" << endl;
		month = 0;
	}
	cout << "Enter the year : ";
	cin >> year;
	cout << "The day you entered is : " << day << endl;
	cout << "The month you entered is : " << month << endl;
	cout << "The year you entered is : " << year << endl;


	return 0;
}