#include<iostream>
using namespace std;
int main()
{
	char b = 'b';
	//字符型变量占一个字节
	// 只能用单引号，并且只能引用一个字符，‘bj’就不行 
	//b = 'nk' ;也不行 
	//字符变量储存的是对应ASCLL编码 
	cout<<b<<endl<<sizeof(b)<<endl;
	//将字符型转换为ASCLL值：（int）b，int（b）都可以 
	cout<<int(b)<<endl; 
	b = 33;  //可以直接赋值ASCLL 
	cout<<b<<endl;
	system("pause");
	return 0;
}
