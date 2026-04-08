#include<iostream>
using namespace std;
int swap(int a, int b) {
	if(a%b == 0){
		return b;
	}
	else {
		return swap(b, a%b);
	}
}
int main()
{
	int a, b;
	cin >> a>>b;
	int c = swap(a, b);
	cout << "最大公约数=" << c << endl;
	cout << "最小公倍数=" << c*(a/c)*(b/c) << endl;
	return 0;
}