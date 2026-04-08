#include<iostream>
using namespace std;
//引用使用场景，通常用来修饰形参
void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}
int main()
{
	//int &ref = 10; 引用本身需要一个合法的内存空间，因此运行错误
	//加入const就可以了，编译器优化代码，int temp = 10；const int& ref = temp；
	const int& ref = 10;
	//ref =20; //加入const后不可以改变值
	cout << ref << endl;
	int a = 10;
	//用常量引用防止误操作修改实参
	showValue(a);
	return 0;
}