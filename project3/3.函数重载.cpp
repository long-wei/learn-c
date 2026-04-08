#include<iostream>
using namespace std;
//函数重载：*同一个作用域下 *函数名称相同 *函数参数 类型不同 或者 个数不同 或 顺序不同
//可以让函数名相同，可以提高复用性
//函数返回值类型不可以作为函数重载的条件
void swap0() {
	cout << "swap0" << endl;
}
void swap1(int a) {
	cout<<"swap1" << endl;
}
void swap2(int a, float b) {
	cout << "swap2" << endl;
}
void swap3(float b, int a) {
	cout << "swap3" << endl;
}
int main()
{
	swap0();
	swap1(1);
	swap2(1, 2.2);
	swap3(2.2, 1);
	return 0;
}
