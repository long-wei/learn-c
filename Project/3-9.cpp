#include<iostream>
using namespace std;
int Zhishu(int a) {
	for (int i = 2; i<int((a + 1)/2); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	cin>>a;
	if (Zhishu(a)) {
		cout <<a<< "是质数" << endl;
	}
	else {
		cout << a << "不是质数" << endl;
	}
	return 0;
}