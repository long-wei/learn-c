#include<iostream>
using namespace std;
//不要返回局部变量的引用
int &test0(){
	static int a = 10;
	return a;
}
int main()
{
	int &r = test0();
	cout << "r = " << r << endl;
	//函数的调用可以作为左值
	test0() = 1000;
	cout << "r = " << r << endl; 
	return 0;
}
