#include<iostream>
using namespace std;
int main()
{
	//语法:数据类型 &别名 = 原名
	//1. *引用必须初始化:	int &b;	不可以
	int a = 10;
	int& b = a;	//引用的本质：转化为int* const b = &a;
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	b = 100;	//内部发现b是引用，自动转化为：*b=100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2. *引用一旦初始化后就不能更改*
	int c = 20;
	b = c;//赋值操作，而不是更改引用
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c <<endl;
	return 0;
}