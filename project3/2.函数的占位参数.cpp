#include<iostream>
using namespace std;

//占位参数：返回值类型 函数名（数据类型）{}
//占位参数也可以有默认值参数 int = 10
void swap(int a, int) { 
	cout << "this is swap。" << endl;
}

int main()
{
	swap(1, 2); //占位参数必须填补
	return 0;
}