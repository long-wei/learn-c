#include<iostream>
using namespace std;
int main()
{	
	double f1,f2;
	cin>>f1>>f2;
	double f = (int)f1%(int)f2;  //小数不可以取模运算
	cout<<f<<endl;

 	int a=1,b,c;
 	b = ++a*10;  //前置递增，先对变量进行++，再运行表达式 
 	cout<<"a="<<a<<"\t++a="<<b<<endl;
 	a = 1;
 	c = a++*10;  //后置递增，先运行表达式，再对变量进行++ 
	cout<<"a="<<a<<"\ta++="<<c<<endl;
	
	//逻辑运算，非！，与&&，或||
	int x = 10, y=0;
	cout<<"!x="<<(!x)<<endl; 
	cout<<"x&&y="<<(x&&y)<<endl;
	cout<<"x||y="<<(x||y)<<endl;
 	system("pause");
 	return 0;
 }
