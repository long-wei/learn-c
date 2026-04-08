#include<iostream>
using namespace std;
int main()
{
	//1.定义指针
	int a = 10;
	//指针定义：数据类型 * 指针变量名
	int * p;
	//让指针记录变量a的地址
	p = &a;
	cout<<"a的地址："<<&a<<endl;
	cout<<"指针p："<<p<<endl;
	
	//2.使用指针
	//通过解引找到指针指向的内存
	//指针前加*表示解引用，找到指针指向的内存中的数据 
	*p = 1000;
	 cout<<"a = "<<a<<endl;
	 cout<<"*p = "<<*p<<endl;
	 
	 //3.指针32系统下占4个字节，64系统下占8个字节
	 cout<<"sizeof (int *) = "<<sizeof(int *)<<endl;  //int * 和 指针名都可以 
	 cout<<"sizeof p = "<<sizeof(p)<<endl; 
	 system("pause");
	 return 0;
 } 
