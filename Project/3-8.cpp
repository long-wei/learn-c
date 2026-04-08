#include<iostream>
using namespace std;
double Exchange(double f) {
	double a = f - 32;
	double c = 5 * a / 9;
	return c;
}
int main()
{
	double F;
	cin >> F;
	cout << Exchange(F) << endl;
	return 0;
}