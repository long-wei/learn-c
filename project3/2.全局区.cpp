#include<iostream>
using namespace std;
//全局变量
int g_a = 110;
//全局常量
const int s_b = 1;


int main()
{
	//全局区：全局变量、静态变量、常量
	
	//普通局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;

	//静态变量 在普通变量前加static
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello" << endl;
	//const修饰的局部变量
	cout << "全局常量g_b的地址为：" << (int)&s_b << endl;  //全局常量
	const int c = 10;
	cout << "局部常量c的地址为：" << (int)&c << endl;  //局部常量
	system("pause");
	return 0;
}