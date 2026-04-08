#include<iostream>
using namespace std;
int main()
{
	/*空指针指变量指向内存中编号为0的空间
		用于初始化指针变量*/
	int * p = NULL;
	//空指针指向的内存是不可以访问的
	* p = 100;   //访问空指针报错 
	cout<<*p<<endl;  
	
	
	//野指针：指针变量指向非法的内存空间（会运行错误） 
	//(int *)0x1100强行转化为地址
	int * a = (int *)0x1100;   
	cout<<*a<<endl; 
	system("pause");
	return 0;
 } 

