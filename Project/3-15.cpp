#include<iostream>
using namespace std;
int getpower(int x, int y) {
	if (y < 0) {
		return 0;
	}
	else if (y > 1) {
		return x * getpower(x, y - 1);
	}
	else {
		return x;
	}
}
double getpower(double x, int y)
{
		if (y < 0) {
			return getpower(1.0/x, abs(y));
		}
		else if (y > 1) {
			return x * getpower(x, y - 1);
		}
		else {
			return x;
		}
}
int main()
{
	int a, m;
	double b;
	cin >> a>>b>>m;
	cout << abs(m) << endl;
	cout <<getpower(a,m)<<endl;
	cout <<getpower(b,m) << endl;
	return 0;
}