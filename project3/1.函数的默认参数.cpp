//和py一样
//但是函数的声明和实现只能有一个有默认参数
#include<iostream>
int swap(int a = 10, int b = 10);

int swap(int a, int b) { //不可以再int a = 10,int b =10
	return a + b;
}

using namespace std;
int main()
{
	cout<< swap(1, 2) << endl;
	cout<<swap()<<endl;
	return 0;
}