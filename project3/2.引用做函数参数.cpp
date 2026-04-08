#include<iostream>
using namespace std;
//值传递
void swap1(int a, int b) {
	int c = a;
	a = b;
	b = c;
}
//地址传递
void swap2(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
//引用传递
void swap3(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int a = 11;
	int b = 22;
	//swap1(a, b);
	//swap2(&a, &b);
	swap3(a, b);
	cout << "a = " << a<< endl;
	cout << "b = " << b<< endl;

	return 0;
}