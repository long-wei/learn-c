#include<iostream>
using namespace std;
int main()
{
	// 三目运算符
	// 语法：表达式1 ? 表达式2 ： 表达式3 
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout<<"c="<<c<<endl;
	
	// c++中三目运算符返回的是变量，可以继续赋值
	(a>b?a:b) = 100;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	a > b ? c = b : c=a;
	cout<<"c="<<c<<endl;
	system("pause");
	return 0; 
 } 
