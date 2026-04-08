#include<iostream>
using namespace std;
int main()
{
	int year;
	bool isleapyear;

	cout << "enter the year" << endl;
	cin >> year;
	isleapyear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

	if (isleapyear)
		cout << year << " is a leap year" << endl;
	else
		cout << year << " is not a leap year" << endl;
	return 0;
}